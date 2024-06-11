#include "word_break_ii.h"

#include <functional>
#include <unordered_set>

namespace WordBreakII {

std::vector<std::string> Solution::wordBreak(std::string s, std::vector<std::string>& wordDict) {
    std::unordered_set<std::string> words(wordDict.begin(), wordDict.end());
    std::unordered_set<int> sizes;
    for (const std::string& word : wordDict) {
        sizes.insert(word.size());
    }

    std::vector<std::string> output;
    std::vector<std::string> array;
    std::function<void(std::vector<std::string>&, int)> f = [&](std::vector<std::string>& array, int idx) {
        if (idx == s.size()) {
            std::string result;
            for (const std::string& word : array) {
                result += word + " ";
            }
            result.pop_back();
            output.push_back(result);
            return;
        }

        for (int size : sizes) {
            if (idx + size > s.size()) continue;

            std::string word = s.substr(idx, size);
            if (words.find(word) == words.end()) continue;
            array.push_back(word);
            f(array, idx + size);
            array.pop_back();
        }
    };

    f(array, 0);
    return output;
}

}  // namespace WordBreakII
