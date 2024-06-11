#ifndef WordBreakII_H
#define WordBreakII_H

#include <string>
#include <vector>

namespace WordBreakII {

class Solution {
   public:
    /**
     * @brief Given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each
     * word is a valid dictionary word. Return all such possible sentences in any order.
     *
     * @param s string
     * @param wordDict vector of strings
     * @return vector of strings
     */
    std::vector<std::string> wordBreak(std::string s, std::vector<std::string>& wordDict);
};

}  // namespace WordBreakII

#endif  // WordBreakII_H
