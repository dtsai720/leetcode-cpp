#include "get_equal_substrings_within_budget.h"

#include <stdexcept>

namespace GetEqualSubstringsWithinBudget {

int Solution::equalSubstring(std::string s, std::string t, int maxCost) {
    if (s.size() != t.size()) {
        throw std::invalid_argument("s and t must have the same size");
    }

    const int n = s.size();
    int maxLen = 0;
    for (int fast = 0, slow = -1; fast < n; ++fast) {
        maxCost -= std::abs(s[fast] - t[fast]);
        while (maxCost < 0) {
            ++slow;
            maxCost += std::abs(s[slow] - t[slow]);
        }
        maxLen = std::max(maxLen, fast - slow);
    }

    return maxLen;
}

}  // namespace GetEqualSubstringsWithinBudget
