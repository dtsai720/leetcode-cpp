#include "the_number_of_beautiful_subsets.h"

#include <algorithm>
#include <functional>

namespace TheNumberOfBeautifulSubset {

int Solution::beautifulSubsets(std::vector<int>& nums, int k) {
    std::sort(nums.begin(), nums.end());

    std::function<int(int, std::vector<int>&)> f = [&](int idx, std::vector<int>& array) {
        if (idx == nums.size()) return 0;
        int count = f(idx + 1, array);
        if (!std::binary_search(array.begin(), array.end(), nums[idx] - k)) {
            array.push_back(nums[idx]);
            count += 1 + f(idx + 1, array);
            array.pop_back();
        }
        return count;
    };
    std::vector<int> array;

    return f(0, array);
}

}  // namespace TheNumberOfBeautifulSubset
