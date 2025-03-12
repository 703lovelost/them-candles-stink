#include "candle.h"
#include <gtest/gtest.h>

TEST(CandleTest, BodyContainsMaxValue) {
    Candle candle(100, 150, 90, 120);
    EXPECT_TRUE(candle.body_contains(120));
}

TEST(CandleTest, BodyContainsMinValue) {
    Candle candle(100, 150, 90, 120);
    EXPECT_FALSE(candle.body_contains(90));
}

TEST(CandleTest, BodyContainsLogic) {
    Candle candle(100, 150, 90, 120);
    EXPECT_FALSE(candle.body_contains(130));
}

TEST(CandleTest, ContainsMaxValue) {
    Candle candle(100, 150, 90, 120);
    EXPECT_TRUE(candle.contains(150));
}

TEST(CandleTest, ContainsMinValue) {
    Candle candle(100, 150, 90, 120);
    EXPECT_TRUE(candle.contains(90));
}

TEST(CandleTest, ContainsLogic) {
    Candle candle(100, 150, 90, 120);
    EXPECT_FALSE(candle.contains(80));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}