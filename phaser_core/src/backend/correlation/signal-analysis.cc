#include "packlo/backend/correlation/signal-analysis.h"

#include <cmath>

namespace correlation {

double SignalAnalysis::stdDev(
    const std::vector<double>& vec, const double mean, const uint32_t from,
    const uint32_t to) {
  double accum = 0.0;
  for (uint32_t i = from; i < to; ++i) {
    const double val = vec[i];
    if (val <= 1.0) {
      const double val_sub_mean = val - mean;
      accum += val_sub_mean * val_sub_mean;
    }
  }
  return std::sqrt(accum / (to - from - 1u));
}

}  // namespace correlation
