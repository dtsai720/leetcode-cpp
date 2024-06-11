#include <gtest/gtest.h>

#include <vector>

#include "coin_change_ii.h"

namespace CoinChangeII {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Test1) {
    std::vector<int> coins = {1, 2, 5};
    int amount = 5;
    int expected = 4;
    int result = solution.change(amount, coins);
    ASSERT_EQ(result, expected);
}

TEST_F(SolutionTest, Test2) {
    std::vector<int> coins = {2};
    int amount = 3;
    int expected = 0;
    int result = solution.change(amount, coins);
    ASSERT_EQ(result, expected);
}

TEST_F(SolutionTest, Test3) {
    std::vector<int> coins = {10};
    int amount = 10;
    int expected = 1;
    int result = solution.change(amount, coins);
    ASSERT_EQ(result, expected);
}

}  // namespace CoinChangeII
