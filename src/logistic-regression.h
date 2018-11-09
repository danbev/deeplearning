#ifndef SRC_LOGISTIC_REGRESSION_H_
#define SRC_LOGISTIC_REGRESSION_H_
#include <string>
#include <vector>

struct data { 
  std::vector<double> x;
  double y;
};

// This is a very basic and inefficient logic regression 
// implementation which uses for loops. But for getting
// familiar with logistic regression it was useful and 
// will serve as a comparision with a vector based 
// implementation.
class LogisticRegression {
 public:
   LogisticRegression(std::vector<data> training_set,
                      std::vector<double> weights,
                      double learning_rate = 0.005,
                      double bias = 0.5) : 
       training_set_(training_set), weights_(weights), 
       learning_rate_(learning_rate), bias_(bias) {
   };
   ~LogisticRegression() = default;
   double predict_y_hat(std::vector<double>) const;
   double loss(double y_hat, double y) const;
   double cost();
   void sgd();
   double bias() const;
   std::vector<double> weights() const;
 private:
   std::vector<data> training_set_;
   std::vector<double> weights_;
   double bias_;
   double learning_rate_;
};

#endif // SRC_LOGISTIC_REGRESSION_H_

