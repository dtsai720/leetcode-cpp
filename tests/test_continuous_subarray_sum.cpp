#include <gtest/gtest.h>

#include "continuous_subarray_sum.h"

namespace ContinuousSubarraySum {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<int> nums = {23, 2, 4, 6, 7};
    int k = 6;
    bool result = solution.checkSubarraySum(nums, k);
    ASSERT_TRUE(result);
}

TEST_F(SolutionTest, Example2) {
    std::vector<int> nums = {23, 2, 6, 4, 7};
    int k = 6;
    bool result = solution.checkSubarraySum(nums, k);
    ASSERT_TRUE(result);
}

TEST_F(SolutionTest, Example3) {
    std::vector<int> nums = {23, 2, 6, 4, 7};
    int k = 13;
    bool result = solution.checkSubarraySum(nums, k);
    ASSERT_FALSE(result);
}
}  // namespace ContinuousSubarraySum
