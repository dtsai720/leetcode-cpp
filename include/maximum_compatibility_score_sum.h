#ifndef MaximumCompatibilityScoreSum_H
#define MaximumCompatibilityScoreSum_H

#include <vector>

namespace MaximumCompatibilityScoreSum {

class Solution {
   public:
    /**
     * @brief calculate the maximum compatibility score sum
     * @param students: the students' answers
     * @param mentors: the mentors' answers
     * @return: the maximum compatibility score sum
     */
    int maxCompatibilitySum(std::vector<std::vector<int>>& students, std::vector<std::vector<int>>& mentors);
};

}  // namespace MaximumCompatibilityScoreSum

#endif  // MaximumCompatibilityScoreSum_H
