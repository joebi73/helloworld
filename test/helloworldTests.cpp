#include <gtest/gtest.h>

TEST(helloworldTests1, FunctionsTests1){
    EXPECT_TRUE(true);
}

TEST(helloworldTests2, FunctionTests1){
    EXPECT_FALSE(false);
}

TEST(helloworldTests3, FunctionTests1){
    ASSERT_TRUE(true);
}