#include <gtest/gtest.h>

#include "most_profit_assigning_work.h"

namespace MostProfitAssigningWork {
class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<int> difficulty = {2, 4, 6, 8, 10};
    std::vector<int> profit = {10, 20, 30, 40, 50};
    std::vector<int> worker = {4, 5, 6, 7};
    int result = solution.maxProfitAssignment(difficulty, profit, worker);
    ASSERT_EQ(result, 100);
}

TEST_F(SolutionTest, Example2) {
    std::vector<int> difficulty = {85, 47, 57};
    std::vector<int> profit = {24, 66, 99};
    std::vector<int> worker = {40, 25, 25};
    int result = solution.maxProfitAssignment(difficulty, profit, worker);
    ASSERT_EQ(result, 0);
}

}  // namespace MostProfitAssigningWork
