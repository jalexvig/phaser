#ifndef PHASER_COMMON_CORE_GFLAGS_H_
#define PHASER_COMMON_CORE_GFLAGS_H_

#include <gflags/gflags.h>
#include <glog/logging.h>

namespace phaser_core {

// Spherical correlation.
DECLARE_int32(phaser_core_spherical_bandwidth);
DECLARE_int32(phaser_core_spherical_zero_padding);

// Spatial correlation.
DECLARE_int32(phaser_core_spatial_n_voxels);
DECLARE_int32(phaser_core_spatial_discretize_lower);
DECLARE_int32(phaser_core_spatial_discretize_upper);
DECLARE_int32(phaser_core_spatial_zero_padding);

}  // namespace phaser_core

#endif  // PHASER_COMMON_CORE_GFLAGS_H_
