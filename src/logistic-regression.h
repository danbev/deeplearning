#ifndef SRC_LOGISTIC_REGRESSION_H_
#define SRC_LOGISTIC_REGRESSION_H_
#include <string>
#include <vector>

// This is a very basic and inefficient logic regression 
// implementation which uses for loops. But for getting
// familiar with logistic regression it was useful and 
// will serve as a comparision with a vector based 
// implementation.
class LogisticRegression {
 public:
   LogisticRegression(std::vector<double> training_data,
                      std::vector<double> test_data,
                      std::vector<double> weights,
                      double learning_rate = 0.005,
                      double bias = 0.5) : 
       training_data_(training_data), test_data_(test_data),
       weights_(weights), learning_rate_(learning_rate), bias_(bias) {
   };
   ~LogisticRegression() = default;
   double z() const;
   double predict_y_hat() const;
   double loss(double y_hat, double y) const;
   void cost();
   double bias() const;
   std::vector<double> weights() const;
 private:
   std::vector<double> training_data_;
   std::vector<double> test_data_;

   //std::vector<double> weights_ {training_data_.size(), 0};
   std::vector<double> weights_;
   double bias_;
   double learning_rate_;
};

#endif // SRC_LOGISTIC_REGRESSION_H_

