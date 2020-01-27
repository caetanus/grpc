/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/api/v2/endpoint/endpoint.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/api/v2/endpoint/endpoint.upb.h"
#include "envoy/api/v2/core/address.upb.h"
#include "envoy/api/v2/core/base.upb.h"
#include "envoy/api/v2/core/health_check.upb.h"
#include "google/protobuf/wrappers.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_api_v2_endpoint_Endpoint_submsgs[2] = {
  &envoy_api_v2_core_Address_msginit,
  &envoy_api_v2_endpoint_Endpoint_HealthCheckConfig_msginit,
};

static const upb_msglayout_field envoy_api_v2_endpoint_Endpoint__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, 1},
  {2, UPB_SIZE(4, 8), 0, 1, 11, 1},
};

const upb_msglayout envoy_api_v2_endpoint_Endpoint_msginit = {
  &envoy_api_v2_endpoint_Endpoint_submsgs[0],
  &envoy_api_v2_endpoint_Endpoint__fields[0],
  UPB_SIZE(8, 16), 2, false,
};

static const upb_msglayout_field envoy_api_v2_endpoint_Endpoint_HealthCheckConfig__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 13, 1},
};

const upb_msglayout envoy_api_v2_endpoint_Endpoint_HealthCheckConfig_msginit = {
  NULL,
  &envoy_api_v2_endpoint_Endpoint_HealthCheckConfig__fields[0],
  UPB_SIZE(4, 4), 1, false,
};

static const upb_msglayout *const envoy_api_v2_endpoint_LbEndpoint_submsgs[3] = {
  &envoy_api_v2_core_Metadata_msginit,
  &envoy_api_v2_endpoint_Endpoint_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_endpoint_LbEndpoint__fields[5] = {
  {1, UPB_SIZE(16, 24), UPB_SIZE(-25, -41), 1, 11, 1},
  {2, UPB_SIZE(0, 0), 0, 0, 14, 1},
  {3, UPB_SIZE(8, 8), 0, 0, 11, 1},
  {4, UPB_SIZE(12, 16), 0, 2, 11, 1},
  {5, UPB_SIZE(16, 24), UPB_SIZE(-25, -41), 0, 9, 1},
};

const upb_msglayout envoy_api_v2_endpoint_LbEndpoint_msginit = {
  &envoy_api_v2_endpoint_LbEndpoint_submsgs[0],
  &envoy_api_v2_endpoint_LbEndpoint__fields[0],
  UPB_SIZE(32, 48), 5, false,
};

static const upb_msglayout *const envoy_api_v2_endpoint_LocalityLbEndpoints_submsgs[4] = {
  &envoy_api_v2_core_Locality_msginit,
  &envoy_api_v2_endpoint_LbEndpoint_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_api_v2_endpoint_LocalityLbEndpoints__fields[5] = {
  {1, UPB_SIZE(4, 8), 0, 0, 11, 1},
  {2, UPB_SIZE(16, 32), 0, 1, 11, 3},
  {3, UPB_SIZE(8, 16), 0, 2, 11, 1},
  {5, UPB_SIZE(0, 0), 0, 0, 13, 1},
  {6, UPB_SIZE(12, 24), 0, 2, 11, 1},
};

const upb_msglayout envoy_api_v2_endpoint_LocalityLbEndpoints_msginit = {
  &envoy_api_v2_endpoint_LocalityLbEndpoints_submsgs[0],
  &envoy_api_v2_endpoint_LocalityLbEndpoints__fields[0],
  UPB_SIZE(20, 40), 5, false,
};

#include "upb/port_undef.inc"

