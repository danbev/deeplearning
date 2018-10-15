#include "gtest/gtest.h"
#include "util.h"

TEST(Util, mean) {
  double arr[] = {1, 2, 4, 6};
  double m = mean(arr, 4);
  EXPECT_DOUBLE_EQ(m, 3.25);
}
