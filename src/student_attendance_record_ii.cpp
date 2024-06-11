#include "student_attendance_record_ii.h"

#include <cstring>
#include <functional>
#include <vector>
#define MOD 1000000007

namespace StudentAttendanceRecordII {

int Solution::checkRecord(int n) {
    int dp[n + 1][2][3];
    std::memset(dp, -1, sizeof(dp));

    std::function<int(int, int, int)> f = [&](int n, int absent, int late) {
        if (absent == 2 || late == 3) return 0;
        if (n == 0) return 1;
        if (dp[n][absent][late] != -1) return dp[n][absent][late];
        int count = f(n - 1, absent, 0) % MOD;
        count = (count + f(n - 1, absent + 1, 0)) % MOD;
        count = (count + f(n - 1, absent, late + 1)) % MOD;
        return dp[n][absent][late] = count;
    };

    return f(n, 0, 0);
}

}  // namespace StudentAttendanceRecordII
