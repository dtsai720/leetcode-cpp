#include <gtest/gtest.h>

#include "replace_words.h"

namespace ReplaceWords {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::vector<std::string> dictionary = {"cat", "bat", "rat"};
    std::string sentence = "the cattle was rattled by the battery";
    std::string expected = "the cat was rat by the bat";
    ASSERT_EQ(solution.replaceWords(dictionary, sentence), expected);
}

TEST_F(SolutionTest, Example2) {
    std::vector<std::string> dictionary = {"a", "b", "c"};
    std::string sentence = "aadsfasf absbs bbab cadsfafs";
    std::string expected = "a a b c";
    ASSERT_EQ(solution.replaceWords(dictionary, sentence), expected);
}
}  // namespace ReplaceWords
