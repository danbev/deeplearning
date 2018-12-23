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

double LogisticRegression::predict_y_hat(std::vector<double> x) const {
  return sigmoid(loop_dot(x, weights_, bias_));
}

double LogisticRegression::predict_y_hat(double x) const {
  return sigmoid(loop_dot(std::vector<double>{x}, weights_, bias_));
}

double LogisticRegression::cost() {
  double loss_sum = 0.0;
  for (int i = 0; i < training_set_.size(); i++) {
    double y_hat = predict_y_hat(training_set_[i].x);
    loss_sum += loss(y_hat, training_set_[i].y);
  }
  return loss_sum * (1.0/training_set_.size());
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
  int m = training_set_.size();
  std::vector<double> d_weights(weights_.size());
  double j = 0.0;
  double db = 0.0;

  // Start one step of degradient decent
  do {
    for (int i = 0; i < m; i++) {
      double z = loop_dot(training_set_[i].x, weights_, bias_);
      double a = sigmoid(z);
      j += loss(a, training_set_[i].y);
      double dz = a - training_set_[i].y; 

      for (int y = 0; y < d_weights.size(); y++) {
        d_weights[y] += training_set_[i].y * dz;
      }
      db += dz;
    }

    // compute the averages
    j /= m;
    db /= m;
    for (int i = 0 ; i < d_weights.size(); i++) {
      d_weights[i] /= training_set_.size();
    }

    // update the weights and the bias
    for (int i = 0; i < weights_.size(); i++) {
      weights_[i] = weights_[i] - learning_rate_ * d_weights[i];
    }
    bias_ = bias_ - learning_rate_ * db;
    // End one step of degradient decent
  } while (j < 0);
}

double LogisticRegression::predict(double x) const {
  // We have trained our model so the weights and bias should be
  // good values. We now want to pass in our value of x through the trained
  // network.
  double prediction = predict_y_hat(x);
  std::cout << "prediction: " << prediction << '\n';
  if (prediction > 0.5) {
    return 1;
  }
  return 0;
}

double LogisticRegression::bias() const {
  return bias_;
}

std::vector<double> LogisticRegression::weights() const {
  return weights_;
}
