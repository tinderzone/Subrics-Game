/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/event_service_config.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/config/core/v3/event_service_config.upb.h"
#include "envoy/config/core/v3/grpc_service.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_config_core_v3_EventServiceConfig_submsgs[1] = {
  &envoy_config_core_v3_GrpcService_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_EventServiceConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_EventServiceConfig_msginit = {
  &envoy_config_core_v3_EventServiceConfig_submsgs[0],
  &envoy_config_core_v3_EventServiceConfig__fields[0],
  UPB_SIZE(8, 16), 1, false, 1, 255,
};

#include "upb/port_undef.inc"
