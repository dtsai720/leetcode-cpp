#include <gtest/gtest.h>

#include "single_number_iii.h"

namespace SingleNumberIII {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<int> nums = {1, 2, 1, 3, 2, 5};
    std::vector<int> expected = {3, 5};
    std::vector<int> result = solution.singleNumber(nums);
    std::sort(result.begin(), result.end());
    ASSERT_EQ(result, expected);
}

TEST_F(SolutionTest, Example2) {
    std::vector<int> nums = {-1, 0};
    std::vector<int> expected = {-1, 0};
    std::vector<int> result = solution.singleNumber(nums);
    std::sort(result.begin(), result.end());
    ASSERT_EQ(result, expected);
}

TEST_F(SolutionTest, Example3) {
    std::vector<int> nums = {0, 1};
    std::vector<int> expected = {0, 1};
    std::vector<int> result = solution.singleNumber(nums);
    std::sort(result.begin(), result.end());
}
}  // namespace SingleNumberIII
