#include <gtest/gtest.h>

#include "number_of_steps_to_reduce_a_number_in_binary_representation_to_one.h"

namespace NumberOfStepsToReduceANumberInBinaryRepresentationToOne {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Example1) {
    std::string s = "1101";
    int expected = 6;
    int result = solution.numberOfSteps(s);
    ASSERT_EQ(result, expected);
}

TEST_F(SolutionTest, Example2) {
    std::string s = "10";
    int expected = 1;
    int result = solution.numberOfSteps(s);
    ASSERT_EQ(result, expected);
}

TEST_F(SolutionTest, Example3) {
    std::string s = "1";
    int expected = 0;
    int result = solution.numberOfSteps(s);
    ASSERT_EQ(result, expected);
}
}  // namespace NumberOfStepsToReduceANumberInBinaryRepresentationToOne
