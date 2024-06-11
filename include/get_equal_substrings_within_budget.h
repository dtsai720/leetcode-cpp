#ifndef GetEqualSubstringsWithinBudget_H
#define GetEqualSubstringsWithinBudget_H

#include <string>

namespace GetEqualSubstringsWithinBudget {
class Solution {
   public:
    /**
     * @brief find the maximum length of a substring of s that can be changed to be the same as the corresponding
     * substring of t
     * @param s: a string
     * @param t: a string
     * @param maxCost: an integer
     * @return: the maximum length of a substring of s that can be changed to be the same as the corresponding substring
     * of t
     */
    int equalSubstring(std::string s, std::string t, int maxCost);
};
}  // namespace GetEqualSubstringsWithinBudget

#endif  // GetEqualSubstringsWithinBudget_H
