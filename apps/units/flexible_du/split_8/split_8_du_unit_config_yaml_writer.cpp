/*
 *
 * Copyright 2021-2024 Software Radio Systems Limited
 *
 * This file is part of srsRAN.
 *
 * srsRAN is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsRAN is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#include "split_8_du_unit_config_yaml_writer.h"
#include "apps/units/flexible_du/du_high/du_high_config_yaml_writer.h"
#include "apps/units/flexible_du/du_low/du_low_config_yaml_writer.h"
#include "apps/units/flexible_du/fapi/fapi_config_yaml_writer.h"
#include "apps/units/flexible_du/split_8/helpers/ru_sdr_config_yaml_writer.h"
#include "split_8_du_unit_config.h"

using namespace srsran;

void srsran::fill_split_8_du_unit_config_in_yaml_schema(YAML::Node& node, const split_8_du_unit_config& config)
{
  fill_du_high_config_in_yaml_schema(node, config.du_high_cfg.config);
  fill_du_low_config_in_yaml_schema(node, config.du_low_cfg);
  fill_fapi_config_in_yaml_schema(node, config.fapi_cfg);
  fill_ru_sdr_config_in_yaml_schema(node, config.ru_cfg);
}