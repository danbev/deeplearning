#include "logistic-regression.h"
#include <iostream>
#include <util.h>
#include <cmath>

double LogisticRegression::z() const {
  double sum = 0;
  for (int i = 0; i < training_data_.size(); i++) {
    sum += training_data_[i].x * weights_[i];
  }
  sum += bias_;
  return sum;
}

double LogisticRegression::predict_y_hat(int idx) const {
  return sigmoid(z());
}

void LogisticRegression::cost() {
  // train the paremeters, the weights and the bias...
  double loss_sum = 0.0;
  double db = 0;
  std::vector<double> d_weights(weights_.size());
  for (int i = 0; i < training_data_.size(); i++) {
    double y_hat = predict_y_hat(i);
    loss_sum += loss(y_hat, training_data_[i].y);
    double derivative = y_hat - training_data_[i].y; 
    for (int y = 0; y < d_weights.size(); y++) {
      d_weights[y] += training_data_[y].x * derivative;
    }
    db += derivative;
  }

  // compute the averages
  loss_sum /= training_data_.size();
  db /= training_data_.size();
  for (int i = 0 ; i < d_weights.size(); i++) {
    d_weights[i] /= training_data_.size();
  }
  // update the weights and the bias
  for (int i = 0; i < weights_.size(); i++) {
    weights_[i] = weights_[i] - learning_rate_ * d_weights[i];
  }
  bias_ = bias_ - learning_rate_ * db;
}

double LogisticRegression::loss(double y_hat, double y) const {
  return y * log(y_hat) + (1 - y) * log(1 - y_hat);
  /*
  if (y == 1) {
    return -log(y_hat);
  } else {
    return -log(1 - y_hat);
  }
  */
}

double LogisticRegression::bias() const {
  return bias_;
}
