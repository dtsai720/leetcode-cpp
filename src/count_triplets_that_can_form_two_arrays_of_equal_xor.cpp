#include "count_triplets_that_can_form_two_arrays_of_equal_xor.h"

#include <unordered_map>

namespace CountTripletsThatCanFormTwoArraysOfEqualXor {

int Solution::countTriplets(std::vector<int>& arr) {
    int n = arr.size();
    std::unordered_map<int, int> cnt, total;
    int ans = 0, s = 0;
    cnt[0] = 1;
    for (int i = 0; i < n; i++) {
        s ^= arr[i];
        if (cnt.find(s) != cnt.end()) {
            ans += i * cnt[s] - total[s];
        }
        cnt[s]++;
        total[s] += i + 1;
    }

    return ans;
}

}  // namespace CountTripletsThatCanFormTwoArraysOfEqualXor
