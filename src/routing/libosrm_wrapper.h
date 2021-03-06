#ifndef LIBOSRM_WRAPPER_H
#define LIBOSRM_WRAPPER_H

/*

This file is part of VROOM.

Copyright (c) 2015-2019, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include "osrm/engine_config.hpp"
#include "osrm/osrm.hpp"

#include "routing/routing_wrapper.h"

namespace vroom {
namespace routing {

class LibosrmWrapper : public RoutingWrapper {

private:
  osrm::EngineConfig _config;
  const osrm::OSRM _osrm;

public:
  LibosrmWrapper(const std::string& profile);

  virtual Matrix<Cost>
  get_matrix(const std::vector<Location>& locs) const override;

  virtual void add_route_info(Route& route) const override;
};

} // namespace routing
} // namespace vroom

#endif
