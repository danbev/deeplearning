#include "gtest/gtest.h"
#include "logistic-regression.h"
#include <iostream>

TEST(LogisticRegression, z) {
  std::vector<entry> training_data { 
    entry { 1.0, 0 },
    entry { 2.0, 1 },
    entry { 3.0, 1 }
  };
  std::vector<double> weights { 0.01, 0.02, 0.03 };
  LogisticRegression lg {training_data, weights};
  EXPECT_DOUBLE_EQ(lg.z(), 0.19);
}

TEST(LogisticRegression, predict_y_hat) {
  std::vector<entry> training_data { 
    entry { 1.0, 0 },
    entry { 2.0, 1 },
    entry { 3.0, 1 }
  };
  std::vector<double> weights { 0.01, 0.02, 0.03 };
  LogisticRegression lg {training_data, weights};
  EXPECT_DOUBLE_EQ(lg.predict_y_hat(0), 0.54735761814308936);
}
