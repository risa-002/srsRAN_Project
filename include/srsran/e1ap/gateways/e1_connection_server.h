/*
 *
 * Copyright 2021-2024 Software Radio Systems Limited
 *
 * By using this file, you agree to the terms and conditions set
 * forth in the LICENSE file which can be found at the top level of
 * the distribution.
 *
 */

#include "srsran/adt/optional.h"

namespace srsran {
namespace srs_cu_cp {

class cu_cp_e1_handler;

/// Connection server responsible for handling new connection requests/drops coming from DUs via the E1 interface
/// and converting them CU-CP commands.
class e1_connection_server
{
public:
  virtual ~e1_connection_server() = default;

  /// Attach a CU-CP handler to the E1 connection server.
  virtual void attach_cu_cp(cu_cp_e1_handler& cu_e1_handler_) = 0;

  /// Get port on which the E1 Server is listening for new connections.
  ///
  /// This method is useful in testing, where we don't want to use a specific port.
  /// \return The port number on which the E1 Server is listening for new connections.
  virtual std::optional<uint16_t> get_listen_port() const = 0;
};

} // namespace srs_cu_cp
} // namespace srsran