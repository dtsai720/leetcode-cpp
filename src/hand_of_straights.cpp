#include "hand_of_straights.h"

#include <algorithm>
#include <unordered_map>

namespace HandOfStraights {

bool Solution::isNStraightHand(std::vector<int>& nums, int k) {
    if (nums.size() % k != 0) return false;
    std::sort(nums.begin(), nums.end());
    std::unordered_map<int, int> mp;
    for (int num : nums) mp[num]++;

    for (int num : nums) {
        if (mp[num] == 0) continue;
        for (int i = 0; i < k; i++) {
            if (mp[num + i]-- == 0) return false;
        }
    }

    return true;
}

}  // namespace HandOfStraights
