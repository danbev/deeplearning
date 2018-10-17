#include "gtest/gtest.h"
#include "linear-regression.h"
#include <iostream>

TEST(LinearRegression, operator) {
  LinearRegression lg;
  lg.add(point{1,1}).add(point{2,2}).add(point{2,3}).add(point{3,6});
  //std::cout << lg.m() << '\n';
  //EXPECT_DOUBLE_EQ(std::setprecision(lg.m(),2), 2.5);
  //EXPECT_DOUBLE_EQ(lg.b(), -2);
}
