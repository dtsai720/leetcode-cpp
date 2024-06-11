#ifndef REPLACE_WORDS_H
#define REPLACE_WORDS_H

#include <string>
#include <vector>

namespace ReplaceWords {

class Solution {
   public:
    /**
     * @brief Replace words in a sentence with their root.
     *
     * @param dictionary A list of words to be used as roots.
     * @param sentence A sentence to be processed.
     * @return std::string The sentence with the words replaced by their roots.
     */
    std::string replaceWords(std::vector<std::string>& dictionary, std::string sentence);
};

}  // namespace ReplaceWords

#endif
