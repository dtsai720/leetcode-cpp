#include <gtest/gtest.h>

#include <vector>

#include "subarray_sums_divisible_by_k.h"

namespace SubarraySumsDivisibleByK {
class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<int> nums = {4, 5, 0, -2, -3, 1};
    int K = 5;
    int expected = 7;
    int result = solution.subarraysDivByK(nums, K);
    ASSERT_EQ(result, expected);
}

TEST_F(SolutionTest, Example2) {
    std::vector<int> nums = {5};
    int K = 9;
    int expected = 0;
    int result = solution.subarraysDivByK(nums, K);
    ASSERT_EQ(result, expected);
}
}  // namespace SubarraySumsDivisibleByK
