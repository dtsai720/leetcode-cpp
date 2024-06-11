#ifndef ContinuousSubarraySum_H
#define ContinuousSubarraySum_H

#include <vector>

namespace ContinuousSubarraySum {

class Solution {
   public:
    /**
     * @brief Check if the given array has a continuous subarray of size at least 2 that sums up to a multiple of k.
     *
     * @param nums Array of integers.
     * @param k Integer.
     * @return True if the array has a continuous subarray of size at least 2 that sums up to a multiple of k, false
     * otherwise.
     */
    bool checkSubarraySum(std::vector<int>& nums, int k);
};

}  // namespace ContinuousSubarraySum

#endif  // ContinuousSubarraySum_H
