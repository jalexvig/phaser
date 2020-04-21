#ifndef PHASER_PRE_MODEL_CLOUD_SEGMENTATION_H_
#define PHASER_PRE_MODEL_CLOUD_SEGMENTATION_H_

#include <cstdint>
#include <vector>

namespace preproc {

class CloudSegmentation {
 public:
  const std::vector<int>& getStartRingIndex() const;
  std::vector<int>& getStartRingIndex();

  const std::vector<int>& getEndRingIndex() const;
  std::vector<int>& getEndRingIndex();

  float getStartOrientation() const;
  float& getStartOrientation();

  float getEndOrientation() const;
  float& getEndOrientation();

  float getOrientationDiff() const;
  float& getOrientationDiff();

  const std::vector<bool>& getGroundFlag() const;
  std::vector<bool>& getGroundFlag();

  const std::vector<uint32_t>& getColumnIndex() const;
  std::vector<uint32_t>& getColumnIndex();

  const std::vector<float>& getRange() const;
  std::vector<float>& getRange();

 private:
  std::vector<int> start_ring_index_;
  std::vector<int> end_ring_index_;
  float start_orientation_;
  float end_orientation_;
  float orientation_diff_;
  std::vector<bool> ground_flag_;
  std::vector<uint32_t> col_ind_;
  std::vector<float> range_;
};

}  // namespace preproc

#endif  // PHASER_PRE_MODEL_CLOUD_SEGMENTATION_H_
