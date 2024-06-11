#ifndef HandOfStraights_H
#define HandOfStraights_H

#include <vector>

namespace HandOfStraights {

class Solution {
   public:
    /**
     * @brief Check if the given hand of cards can be arranged into W groups of W consecutive cards.
     *
     * @param nums A vector of integers representing the hand of cards.
     * @param k An integer representing the number of groups.
     * @return true If the hand of cards can be arranged into W groups of W consecutive cards.
     */
    bool isNStraightHand(std::vector<int>& nums, int k);
};

}  // namespace HandOfStraights

#endif  // HandOfStraights_H
