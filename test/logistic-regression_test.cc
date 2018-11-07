#include "gtest/gtest.h"
#include "logistic-regression.h"
#include <iostream>

TEST(LogisticRegression, z) {
  // Training data is a single input, for example it could be
  // the pixels of an image, individual data like the size
  // of a house, the number of rooms, etc.
  std::vector<double> training_data { 1.0, 2.0, 3.0 };
  std::vector<double> test_data { 0, 1, 1 };
  std::vector<double> weights { 0.01, 0.02, 0.03 };
  LogisticRegression lg {training_data, test_data, weights};
  EXPECT_DOUBLE_EQ(lg.z(), 0.64);
}

TEST(LogisticRegression, predict_y_hat) {
  std::vector<double> training_data { 1.0, 2.0, 3.0 };
  std::vector<double> test_data { 0, 1, 1 };
  std::vector<double> weights { 0.01, 0.02, 0.03 };
  LogisticRegression lg {training_data, test_data, weights};
  EXPECT_DOUBLE_EQ(lg.predict_y_hat(), 0.65475346060631923);
}
