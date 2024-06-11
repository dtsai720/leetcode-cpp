#include <gtest/gtest.h>

#include "hand_of_straights.h"

namespace HandOfStraights {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<int> nums = {1, 2, 3, 6, 2, 3, 4, 7, 8};
    bool result = solution.isNStraightHand(nums, 3);
    ASSERT_TRUE(result);
}

TEST_F(SolutionTest, Example2) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    bool result = solution.isNStraightHand(nums, 4);
    ASSERT_FALSE(result);
}
}  // namespace HandOfStraights
