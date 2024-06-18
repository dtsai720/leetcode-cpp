#include "most_profit_assigning_work.h"

#include <algorithm>
#include <queue>

namespace MostProfitAssigningWork {

int Solution::maxProfitAssignment(std::vector<int>& difficulty, std::vector<int>& profit, std::vector<int>& worker) {
    std::priority_queue<std::pair<int, int>> jobs;
    size_t n = difficulty.size();
    while (n--) {
        jobs.push(std::make_pair(profit[n], -difficulty[n]));
    }
    std::sort(worker.rbegin(), worker.rend());

    int maxProfit = 0;
    for (int w : worker) {
        while (!jobs.empty() && -jobs.top().second > w) jobs.pop();
        if (jobs.empty()) return maxProfit;
        maxProfit += jobs.top().first;
    }

    return maxProfit;
}
}  // namespace MostProfitAssigningWork
