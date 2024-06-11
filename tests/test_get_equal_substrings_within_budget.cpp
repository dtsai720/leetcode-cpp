#include <gtest/gtest.h>

#include "get_equal_substrings_within_budget.h"

namespace GetEqualSubstringsWithinBudget {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::string s1 = "abcd";
    std::string s2 = "bcdf";
    int cost = 3;
    int result = solution.equalSubstring(s1, s2, cost);
    int expected = 3;
    ASSERT_EQ(expected, result);
}

TEST_F(SolutionTest, Example2) {
    std::string s1 = "abcd";
    std::string s2 = "cdef";
    int cost = 3;
    int result = solution.equalSubstring(s1, s2, cost);
    int expected = 1;
    ASSERT_EQ(expected, result);
}

TEST_F(SolutionTest, Example3) {
    std::string s1 = "abcd";
    std::string s2 = "acde";
    int cost = 0;
    int result = solution.equalSubstring(s1, s2, cost);
    int expected = 1;
    ASSERT_EQ(expected, result);
}
}  // namespace GetEqualSubstringsWithinBudget
