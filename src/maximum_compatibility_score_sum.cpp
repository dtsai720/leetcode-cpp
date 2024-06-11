#include "maximum_compatibility_score_sum.h"

#include <functional>

namespace MaximumCompatibilityScoreSum {

int Solution::maxCompatibilitySum(std::vector<std::vector<int>>& students, std::vector<std::vector<int>>& mentors) {
    const int n = students.size();
    const int m = students[0].size();

    if (students.size() != mentors.size()) {
        throw std::invalid_argument("students and mentors should have the same size");
    }

    std::vector<std::vector<int>> nums(n, std::vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            if (students[i].size() != mentors[j].size() || students[i].size() != m) {
                throw std::invalid_argument("students and mentors should have the same size");
            }

            for (int k = 0; k < m; k++) {
                sum += students[i][k] == mentors[j][k];
            }
            nums[i][j] = sum;
        }
    }

    std::vector<bool> visited(n, false);
    int output = 0;

    std::function<void(int, int)> f = [&](int idx, int sum) {
        if (idx == n) {
            output = std::max(output, sum);
            return;
        }

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                f(idx + 1, sum + nums[idx][i]);
                visited[i] = false;
            }
        }
    };

    f(0, 0);

    return output;
}

}  // namespace MaximumCompatibilityScoreSum
