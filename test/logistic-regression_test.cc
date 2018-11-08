#include "gtest/gtest.h"
#include "logistic-regression.h"
#include <iostream>

TEST(LogisticRegression, predict_y_hat) {
  std::vector<data> training_set { 
    { {1.0, 2.0, 3.0}, 1}
  };
  std::vector<double> weights { 0.01, 0.02, 0.03 };
  LogisticRegression lg {training_set, weights};
  EXPECT_DOUBLE_EQ(lg.predict_y_hat(training_set[0].x), 0.65475346060631923);
}
