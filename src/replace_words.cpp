#include "replace_words.h"

namespace ReplaceWords {

class Trie {
   public:
    Trie* next[26];
    bool done;

    void insert(std::string& word) {
        Trie* cur = this;
        for (char c : word) {
            if (cur->next[c - 'a'] == nullptr) {
                cur->next[c - 'a'] = new Trie();
            }
            cur = cur->next[c - 'a'];
        }
        cur->done = true;
    }

    std::string getRoot(std::string& word) {
        Trie* cur = this;
        std::string root;
        for (char c : word) {
            if (cur->next[c - 'a'] == nullptr) return word;
            root.push_back(c);
            cur = cur->next[c - 'a'];
            if (cur->done) return root;
        }

        return word;
    }
};

std::string Solution::replaceWords(std::vector<std::string>& dictionary, std::string sentence) {
    Trie* trie = new Trie();
    for (std::string& word : dictionary) {
        trie->insert(word);
    }

    std::string current, output;
    sentence.push_back(' ');
    for (char c : sentence) {
        if (c != ' ') {
            current.push_back(c);
            continue;
        }

        output += trie->getRoot(current) + " ";
        current.clear();
    }

    output.pop_back();
    return output;
}

}  // namespace ReplaceWords
