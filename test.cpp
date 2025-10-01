#include <gtest/gtest.h>
#include "calculateLoginAward.h"

const std::string LEGENDARY = "Legendary Award";
const std::string NORMAL = "Normal Award";
const std::string BIG = "Big Award";
const std::string NO = "No Award";

TEST(CalculateLoginAwardTest, KTGTBien) {
    EXPECT_EQ(calculateLoginAward(0, false, 50), NORMAL);
    EXPECT_EQ(calculateLoginAward(1, false, 50), NORMAL);
    EXPECT_EQ(calculateLoginAward(99, false, 50), BIG);
    EXPECT_EQ(calculateLoginAward(100, false, 50), BIG);
    EXPECT_EQ(calculateLoginAward(50, false, 0), NORMAL);
    EXPECT_EQ(calculateLoginAward(50, false, 1), NORMAL);
    EXPECT_EQ(calculateLoginAward(50, false, 99), BIG);
    EXPECT_EQ(calculateLoginAward(50, false, 100), BIG);
    EXPECT_EQ(calculateLoginAward(50, true, 50), BIG);
    EXPECT_EQ(calculateLoginAward(50, false, 50), NORMAL);
}