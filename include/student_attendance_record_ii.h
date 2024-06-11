#ifndef StudentAttendanceRecordII_H
#define StudentAttendanceRecordII_H

namespace StudentAttendanceRecordII {

class Solution {
   public:
    /**
     * @brief Given a positive integer n, return the number of all possible attendance records with length n, which will
     * be regarded as rewardable. The answer may be very large, return it after mod 10^9 + 7.
     *
     * @param n: a integer
     * @return: return a integer
     */
    int checkRecord(int n);
};

}  // namespace StudentAttendanceRecordII

#endif  // StudentAttendanceRecordII_H
