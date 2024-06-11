#include <gtest/gtest.h>

#include "word_break_ii.h"

namespace WordBreakII {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::string s = "catsanddog";
    std::vector<std::string> wordDict = {"cat", "cats", "and", "sand", "dog"};
    std::vector<std::string> expected = {"cats and dog", "cat sand dog"};
    std::vector<std::string> output = solution.wordBreak(s, wordDict);

    std::sort(expected.begin(), expected.end());
    std::sort(output.begin(), output.end());
    EXPECT_EQ(output, expected);
}

TEST_F(SolutionTest, Example2) {
    std::string s = "pineapplepenapple";
    std::vector<std::string> wordDict = {"apple", "pen", "applepen", "pine", "pineapple"};
    std::vector<std::string> expected = {"pine apple pen apple", "pineapple pen apple", "pine applepen apple"};
    std::vector<std::string> output = solution.wordBreak(s, wordDict);

    std::sort(expected.begin(), expected.end());
    std::sort(output.begin(), output.end());
    EXPECT_EQ(output, expected);
}

TEST_F(SolutionTest, Example3) {
    std::string s = "catsandog";
    std::vector<std::string> wordDict = {"cats", "dog", "sand", "and", "cat"};
    std::vector<std::string> expected = {};
    std::vector<std::string> output = solution.wordBreak(s, wordDict);

    std::sort(expected.begin(), expected.end());
    std::sort(output.begin(), output.end());
    EXPECT_EQ(output, expected);
}
}  // namespace WordBreakII
