#ifndef TheNumberOfBeautifulSubset_H
#define TheNumberOfBeautifulSubset_H

#include <vector>

namespace TheNumberOfBeautifulSubset {

class Solution {
   public:
    /**
     * @brief Given an array of integers nums and an integer k. A subset is called beautiful if it has at most k
     * elements and all elements are distinct. Return the number of beautiful subsets.
     *
     * @param nums: a list of integers
     * @param k: an integer
     * @return: return a integer
     */
    int beautifulSubsets(std::vector<int>& nums, int k);
};

}  // namespace TheNumberOfBeautifulSubset

#endif  // TheNumberOfBeautifulSubset_H
