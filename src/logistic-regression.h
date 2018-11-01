#ifndef SRC_LOGISTIC_REGRESSION_H_
#define SRC_LOGISTIC_REGRESSION_H_
#include <string>
#include <vector>

struct entry {
  double x;
  double y;
};

// This is a very basic and inefficient logic regression 
// implementation which uses for loops. But for getting
// familiar with logistic regression it was useful and 
// will serve as a comparision with a vector based 
// implementation.
class LogisticRegression {
 public:
   LogisticRegression(std::vector<entry> training_data,
                      std::vector<double> weights,
                      double learning_rate = 0.005,
                      double bias = 0.05) : 
       training_data_(training_data), weights_(weights),
       learning_rate_(learning_rate), bias_(bias) {};
   ~LogisticRegression() = default;
   double bias() const;
   double sum() const;
   double predict_y_hat(int idx) const;
   double loss(double y_hat, double y) const;
   void cost();
 private:
   std::vector<entry> training_data_;
   std::vector<double> weights_;
   double bias_ = 0.05;
   double learning_rate_ = 0.05;
};

#endif // SRC_LOGISTIC_REGRESSION_H_

