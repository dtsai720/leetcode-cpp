#ifndef SubarraySumsDivisibleByK_H
#define SubarraySumsDivisibleByK_H

#include <vector>

namespace SubarraySumsDivisibleByK {

class Solution {
   public:
    /**
     * Given an array A of integers, return the number of (contiguous, non-empty) subarrays that have a sum divisible by
     * K.
     *
     * @param nums an array of integers
     * @param K an integer
     * @return the number of (contiguous, non-empty) subarrays that have a sum divisible by K
     */
    int subarraysDivByK(std::vector<int>& nums, int K);
};

}  // namespace SubarraySumsDivisibleByK

#endif /* SubarraySumsDivisibleByK_H */
