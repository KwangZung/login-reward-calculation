#include <gtest/gtest.h>
#include "calculateLoginAward.h"

const std::string LEGENDARY = "Legendary Award";
const std::string NORMAL = "Normal Award";
const std::string BIG = "Big Award";
const std::string NO = "No Award";

TEST(CalculateLoginAwardTest, KTGTBien)
{
    EXPECT_EQ(calculateLoginAward(0, false, 50), NORMAL);
    EXPECT_EQ(calculateLoginAward(1, false, 50), NORMAL);
    EXPECT_EQ(calculateLoginAward(99, false, 50), NORMAL);
    EXPECT_EQ(calculateLoginAward(100, false, 50), BIG);
    EXPECT_EQ(calculateLoginAward(50, false, 0), NORMAL);
    EXPECT_EQ(calculateLoginAward(50, false, 1), NORMAL);
    EXPECT_EQ(calculateLoginAward(50, false, 99), NORMAL);
    EXPECT_EQ(calculateLoginAward(50, false, 100), BIG);
    EXPECT_EQ(calculateLoginAward(50, true, 50), BIG);
    EXPECT_EQ(calculateLoginAward(50, false, 50), NORMAL);
}

TEST(CalculateLoginAwardTest, BangQuyetDinh)
{
    EXPECT_EQ(calculateLoginAward(100, true, 50), LEGENDARY);
    EXPECT_EQ(calculateLoginAward(100, false, 50), BIG);
    EXPECT_EQ(calculateLoginAward(40, true, 100), LEGENDARY);
    EXPECT_EQ(calculateLoginAward(40, false, 100), BIG);
    EXPECT_EQ(calculateLoginAward(70, true, 30), BIG);
    EXPECT_EQ(calculateLoginAward(70, false, 30), NORMAL);
    EXPECT_EQ(calculateLoginAward(30, true, 70), BIG);
    EXPECT_EQ(calculateLoginAward(30, false, 70), NORMAL);
    EXPECT_EQ(calculateLoginAward(30, true, 30), NORMAL);
    EXPECT_EQ(calculateLoginAward(30, false, 30), NO);
}

TEST(CalculateLoginAwardTest, KTDongDieuKhien)
{
    EXPECT_EQ(calculateLoginAward(100, true, 10), LEGENDARY);
    EXPECT_EQ(calculateLoginAward(60, false, 100), BIG);
    EXPECT_EQ(calculateLoginAward(70, true, 66), BIG);
    EXPECT_EQ(calculateLoginAward(70, false, 36), NORMAL);
    EXPECT_EQ(calculateLoginAward(45, true, 10), NORMAL);
    EXPECT_EQ(calculateLoginAward(23, false, 49), NO);
}