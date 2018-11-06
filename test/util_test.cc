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

TEST(Util, sigmoid_prime) {
  double s = sigmoid(0);
  EXPECT_DOUBLE_EQ(sigmoid_prime(s), 0.25);
}

TEST(Util, dot) {
  double a[] = {1.0, 2.0, 3.0, 4.0};
  double b[] = {4.0, 3.0, 2.0, 1.0};
  EXPECT_DOUBLE_EQ(dot(a, b, 4), 20);
}

TEST(Util, dot_un_even) {
  double a[] = {1.0, 2.0, 3.0};
  double b[] = {4.0, 3.0, 2.0};
  EXPECT_DOUBLE_EQ(dot(a, b, 3), 16);

  double a_2[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  double b_2[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  EXPECT_DOUBLE_EQ(dot(a_2, b_2, 5), 55);
}

TEST(Util, dot_single) {
  double a[] = {1.0};
  double b[] = {4.0};
  EXPECT_DOUBLE_EQ(dot(a, b, 1), 4);
}
