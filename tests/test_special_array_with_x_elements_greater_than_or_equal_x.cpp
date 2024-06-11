#include <gtest/gtest.h>

#include "special_array_with_x_elements_greater_than_or_equal_x.h"

namespace SpecialArrayWithXElementsGreaterThanOrEqualX {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Test1) {
    std::vector<int> nums = {3, 5};
    int expected = 2;
    int output = solution.specialArray(nums);
    EXPECT_EQ(output, expected);
}

TEST_F(SolutionTest, Test2) {
    std::vector<int> nums = {0, 0};
    int expected = -1;
    int output = solution.specialArray(nums);
    EXPECT_EQ(output, expected);
}

TEST_F(SolutionTest, Test3) {
    std::vector<int> nums = {0, 4, 3, 0, 4};
    int expected = 3;
    int output = solution.specialArray(nums);
    EXPECT_EQ(output, expected);
}
}  // namespace SpecialArrayWithXElementsGreaterThanOrEqualX
