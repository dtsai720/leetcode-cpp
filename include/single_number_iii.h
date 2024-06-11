#ifndef SingleNumberIII_H
#define SingleNumberIII_H

#include <vector>

namespace SingleNumberIII {

class Solution {
   public:
    /**
     * @brief Find the two numbers that appear only once in an array of numbers
     * @param nums: an integer array
     * @return: an integer array
     */
    std::vector<int> singleNumber(std::vector<int>& nums);
};

}  // namespace SingleNumberIII

#endif  // SingleNumberIII_H
