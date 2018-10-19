#include "gtest/gtest.h"
#include "util.h"

TEST(Util, mean) {
  double arr[] = {1, 2, 4, 6};
  double m = mean(arr, 4);
  EXPECT_DOUBLE_EQ(m, 3.25);
}

TEST(Util, sigmoid) {
  EXPECT_DOUBLE_EQ(sigmoid(0), 0.5);
  EXPECT_DOUBLE_EQ(sigmoid(8), 0.99966464986953363);
}
