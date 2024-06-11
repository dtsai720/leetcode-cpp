#include "single_number_iii.h"

#include <unordered_set>

namespace SingleNumberIII {

std::vector<int> Solution::singleNumber(std::vector<int>& nums) {
    std::unordered_set<int> myset;
    for (int num : nums) {
        if (myset.count(num) == 0) {
            myset.insert(num);
        } else {
            myset.erase(num);
        }
    }

    return std::vector<int>(myset.begin(), myset.end());
}

}  // namespace SingleNumberIII
