#include "subarray_sums_divisible_by_k.h"

namespace SubarraySumsDivisibleByK {

int Solution::subarraysDivByK(std::vector<int>& nums, int K) {
    std::vector<int> count(K, 0);
    count[0] = 1;
    int prefixSum = 0;
    int result = 0;
    for (int num : nums) {
        prefixSum = ((prefixSum + num) % K + K) % K;
        result += count[prefixSum]++;
    }
    return result;
}

}  // namespace SubarraySumsDivisibleByK
