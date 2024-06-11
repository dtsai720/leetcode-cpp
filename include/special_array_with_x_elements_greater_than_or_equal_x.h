#ifndef SpecialArrayWithXElementsGreaterThanOrEqualX_H
#define SpecialArrayWithXElementsGreaterThanOrEqualX_H

#include <vector>

namespace SpecialArrayWithXElementsGreaterThanOrEqualX {

class Solution {
   public:
    /**
     * @brief You are given an integer array nums of size n. An integer x is said to be special if x is greater than or
     * equal to x elements in nums. Return the number of special integers.
     * @param nums: a list of integers
     * @return: return a integer
     */
    int specialArray(std::vector<int>& nums);
};

}  // namespace SpecialArrayWithXElementsGreaterThanOrEqualX

#endif  // SpecialArrayWithXElementsGreaterThanOrEqualX_H
