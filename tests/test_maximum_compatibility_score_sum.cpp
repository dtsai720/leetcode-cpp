#include <gtest/gtest.h>

#include "maximum_compatibility_score_sum.h"

namespace MaximumCompatibilityScoreSum {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<std::vector<int>> students = {{1, 1, 0}, {1, 0, 1}, {0, 0, 1}};
    std::vector<std::vector<int>> mentors = {{1, 0, 0}, {0, 0, 1}, {1, 1, 0}};
    int result = solution.maxCompatibilitySum(students, mentors);
    ASSERT_EQ(result, 8);
}

TEST_F(SolutionTest, Example2) {
    std::vector<std::vector<int>> students = {{0, 0}, {0, 0}, {0, 0}};
    std::vector<std::vector<int>> mentors = {{1, 1}, {1, 1}, {1, 1}};
    int result = solution.maxCompatibilitySum(students, mentors);
    ASSERT_EQ(result, 0);
}

}  // namespace MaximumCompatibilityScoreSum
