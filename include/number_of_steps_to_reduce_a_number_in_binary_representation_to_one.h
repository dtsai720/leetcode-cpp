#ifndef NumberOfStepsToReduceANumberInBinaryRepresentationToOne_H
#define NumberOfStepsToReduceANumberInBinaryRepresentationToOne_H

#include <string>

namespace NumberOfStepsToReduceANumberInBinaryRepresentationToOne {

class Solution {
   public:
    /**
     * @brief Given a number s in binary representation, return the number of steps to reduce it to 1
     *
     * @param s a string representing a number in binary representation
     * @return the number of steps to reduce the number to 1
     */
    int numberOfSteps(std::string s);
};

}  // namespace NumberOfStepsToReduceANumberInBinaryRepresentationToOne

#endif
