#include "logistic-regression.h"
#include <iostream>
#include <util.h>
#include <cmath>
#include <vector>

double loop_dot(std::vector<double> x, std::vector<double> w, double b) {
  double sum = 0;
  for (int i = 0; i < x.size(); i++) {
    sum += x[i] * w[i];
  }
  sum += b;
  return sum;
}

// For a single training entry
double LogisticRegression::predict_y_hat(std::vector<double> x) const {
  return sigmoid(loop_dot(x, weights_, bias_));
}

// For the entire training set
double LogisticRegression::cost() {
  double loss_sum = 0.0;
  for (int i = 0; i < training_set_.size(); i++) {
    double y_hat = predict_y_hat(training_set_[i].x);
    // compare the prediction with the expected value
    loss_sum += loss(y_hat, training_set_[i].y);
  }
  return loss_sum * (1/training_set_.size());
}

double LogisticRegression::loss(double y_hat, double y) const {
  //return -(y * log(y_hat) + (1 - y) * log(1 - y_hat));
  if (y == 1) {
    return -log(y_hat);
  } else {
    return -log(1 - y_hat);
  }
}

void LogisticRegression::train() {
  // train the parameters, the weights and the bias...
  std::vector<double> d_weights(weights_.size());
  double loss_sum = 0.0;
  double db = 0.0;

  for (int i = 0; i < training_set_.size(); i++) {
    double y_hat = predict_y_hat(training_set_[i].x);
    // compare the prediction with the expected value
    loss_sum += loss(y_hat, training_set_[i].y);

    // now
    double derivative = y_hat - training_set_[i].y; 
    for (int y = 0; y < d_weights.size(); y++) {
      d_weights[y] += training_set_[i].y * derivative;
    }
    db += derivative;
  }

  // compute the averages
  loss_sum /= training_set_.size();
  db /= training_set_.size();
  for (int i = 0 ; i < d_weights.size(); i++) {
    d_weights[i] /= training_set_.size();
  }

  /*
  do {
    // update the weights and the bias
    for (int i = 0; i < weights_.size(); i++) {
      weights_[i] = weights_[i] - learning_rate_ * d_weights[i];
    }
    bias_ = bias_ - learning_rate_ * db;
  } while (
  */
}

double LogisticRegression::bias() const {
  return bias_;
}

std::vector<double> LogisticRegression::weights() const {
  return weights_;
}
