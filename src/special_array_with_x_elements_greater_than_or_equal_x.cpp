#include "special_array_with_x_elements_greater_than_or_equal_x.h"

#include <algorithm>

namespace SpecialArrayWithXElementsGreaterThanOrEqualX {

int Solution::specialArray(std::vector<int>& nums) {
    if (nums.empty()) return -1;
    std::sort(nums.begin(), nums.end());
    int min_value = 0, max_value = nums.back();
    while (min_value <= max_value) {
        int mid = min_value + (max_value - min_value) / 2;
        int idx = std::lower_bound(nums.begin(), nums.end(), mid) - nums.begin();
        if (nums.size() - idx == mid) return mid;
        if (nums.size() - idx > mid)
            min_value = mid + 1;
        else
            max_value = mid - 1;
    }

    return -1;
}

}  // namespace SpecialArrayWithXElementsGreaterThanOrEqualX
