#include "gtest/gtest.h"
#include "logistic-regression.h"
#include <iostream>

TEST(LogisticRegression, predict_y_hat) {
  std::vector<data> training_set { 
    { {65.0}, 1}
  };
  std::vector<double> weights { 0.01 };
  LogisticRegression lr {training_set, weights};
  EXPECT_DOUBLE_EQ(lr.predict_y_hat(training_set[0].x), 0.75951091694911099);
}

TEST(LogisticRegression, loss) {
  std::vector<data> training_set { 
    { {65.0}, 1}
  };
  std::vector<double> weights { 0.01 };
  LogisticRegression lr {training_set, weights};

  double y_hat = lr.predict_y_hat(training_set[0].x);
  EXPECT_DOUBLE_EQ(y_hat, 0.75951091694911099);
  EXPECT_DOUBLE_EQ(lr.loss(y_hat, training_set[0].y), 0.27508058318639855);
}


TEST(LogisticRegression, cost) {
  std::vector<data> training_set { 
    {{65.0}, 1},
    {{60.0}, 0},
    {{80.0}, 1},
    {{45.0}, 0}
  };
  std::vector<double> weights { 0.01, 0.01, 0.01, 0.01 };
  LogisticRegression lr {training_set, weights};
  EXPECT_DOUBLE_EQ(lr.cost(), 0.79509519224644354);
}

TEST(LogisticRegression, train) {
  // Imagine that the data below are exam scores, and if that
  // would be enough to pass or fail the exam (1 or 0).
  std::vector<data> training_set { 
    { {65.0}, 1},
    { {60.0}, 0},
    { {20.0}, 0},
    { {80.0}, 1},
  };
  std::vector<double> weights { 0.01, 0.02, 0.03, 0.02 };
  LogisticRegression lr {training_set, weights};
  lr.train();
  //EXPECT_DOUBLE_EQ(lr.gd(), -0.42349651022253426);
}
