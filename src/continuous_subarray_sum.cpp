#include "continuous_subarray_sum.h"

#include <unordered_set>

namespace ContinuousSubarraySum {

bool Solution::checkSubarraySum(std::vector<int>& nums, int k) {
    std::unordered_set<int> mod_k_set;

    int sum = 0;
    for (int num : nums) {
        sum = (sum + num) % k;
        if (mod_k_set.find(sum) != mod_k_set.end()) return true;
        mod_k_set.insert(((sum - num) % k + k) % k);
    }
    return false;
}

}  // namespace ContinuousSubarraySum
