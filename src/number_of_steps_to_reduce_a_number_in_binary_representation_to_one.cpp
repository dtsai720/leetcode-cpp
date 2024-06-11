#include "number_of_steps_to_reduce_a_number_in_binary_representation_to_one.h"

namespace NumberOfStepsToReduceANumberInBinaryRepresentationToOne {

int Solution::numberOfSteps(std::string s) {
    int steps = 0;
    int carry = 0;
    for (int i = s.size() - 1; i > 0; --i) {
        if (s[i] - '0' + carry == 1) {
            steps += 2;
            carry = 1;
        } else {
            steps += 1;
        }
    }

    return steps + carry;
}

}  // namespace NumberOfStepsToReduceANumberInBinaryRepresentationToOne
