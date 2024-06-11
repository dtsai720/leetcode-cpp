#include <gtest/gtest.h>

#include "student_attendance_record_ii.h"

namespace StudentAttendanceRecordII {

class SolutionTest : public ::testing::Test {
   protected:
    Solution solution;
};

TEST_F(SolutionTest, Test1) {
    int n = 2;
    int expected = 8;
    int output = solution.checkRecord(n);
    EXPECT_EQ(output, expected);
}

TEST_F(SolutionTest, Test2) {
    int n = 1;
    int expected = 3;
    int output = solution.checkRecord(n);
    EXPECT_EQ(output, expected);
}

TEST_F(SolutionTest, Test3) {
    int n = 10101;
    int expected = 183236316;
    int output = solution.checkRecord(n);
    EXPECT_EQ(output, expected);
}
}  // namespace StudentAttendanceRecordII
