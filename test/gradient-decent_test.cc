#include "gtest/gtest.h"
#include "gradient-decent.h"
#include <iostream>

TEST(GradientDecent, add) {
  GradientDecent gd;
  gd.add(point{1,1})->add(point{2,2})->add(point{2,3})->add(point{3,6});
  EXPECT_DOUBLE_EQ(gd.slope(), 0.43);
  EXPECT_DOUBLE_EQ(gd.y_intercept(), 0.21);
}

TEST(GradientDecent, estimate) {
  GradientDecent gd;
  gd.add(point{1,1})->add(point{2,2})->add(point{2,3})->add(point{3,6});
  EXPECT_DOUBLE_EQ(gd.estimate(4), 1.93); 
}
