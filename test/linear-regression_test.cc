#include "gtest/gtest.h"
#include "linear-regression.h"
#include <iostream>

TEST(LinearRegression, operator) {
  LinearRegression lg;
  lg.add(point{1,1})->add(point{2,2})->add(point{2,3})->add(point{3,6});
  EXPECT_DOUBLE_EQ(lg.slope(), 2.5);
  EXPECT_DOUBLE_EQ(lg.y_intercept(), -2);
}
