#include <gtest/gtest.h>

#include "count_triplets_that_can_form_two_arrays_of_equal_xor.h"

namespace CountTripletsThatCanFormTwoArraysOfEqualXor {
class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<int> arr = {2, 3, 1, 6, 7};
    int result = solution.countTriplets(arr);
    int expected = 4;
    ASSERT_EQ(expected, result);
}

TEST_F(SolutionTest, Example2) {
    std::vector<int> arr = {1, 1, 1, 1, 1};
    int result = solution.countTriplets(arr);
    int expected = 10;
    ASSERT_EQ(expected, result);
}
}  // namespace CountTripletsThatCanFormTwoArraysOfEqualXor
