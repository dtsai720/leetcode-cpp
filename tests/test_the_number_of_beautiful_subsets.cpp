#include <gtest/gtest.h>

#include "the_number_of_beautiful_subsets.h"

namespace TheNumberOfBeautifulSubset {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<int> nums = {2, 4, 6};
    int k = 2;
    int expected = 4;
    int output = solution.beautifulSubsets(nums, k);
    ASSERT_EQ(output, expected);
}

TEST_F(SolutionTest, Example2) {
    std::vector<int> nums = {1};
    int k = 1;
    int expected = 1;
    int output = solution.beautifulSubsets(nums, k);
    ASSERT_EQ(output, expected);
}
}  // namespace TheNumberOfBeautifulSubset
