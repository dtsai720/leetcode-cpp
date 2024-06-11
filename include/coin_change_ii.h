#ifndef CoinChangeII_H
#define CoinChangeII_H

#include <vector>

namespace CoinChangeII {

class Solution {
   public:
    /**
     * @brief Given an integer array coins representing coins of different denominations and an integer amount
     * representing a total amount of money. Return the number of combinations that make up that amount. You may assume
     * that you have an infinite number of each kind of coin.
     *
     * @param amount The total amount of money.
     * @param coins The coin denominations.
     * @return The number of combinations that make up the amount.
     */
    int change(int amount, std::vector<int>& coins);
};

}  // namespace CoinChangeII

#endif /* CoinChangeII_H */
