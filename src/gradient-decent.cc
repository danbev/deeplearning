#include "gradient-decent.h"
#include <iostream>

GradientDecent* GradientDecent::add(point p) {
  std::cout << "adding point[x: " << p.x << ", y: " << p.y << ']' <<  '\n';
  data_.push_back(p);
  calculate();
  return this;
}

void GradientDecent::calculate() {
  double learning_rate = 0.01;
  for (int i = 0 ; i < data_.size(); i++) {
    int x = data_[i].x;
    int y = data_[i].y;

    int guess = slope_ * x + y_intercept_;
    int error = y - guess;

    slope_ += (error * x) * learning_rate;
    y_intercept_ += error * learning_rate;
  } 
}

double GradientDecent::estimate(int x) const {
  return y_intercept_ + slope_ * x;
}

double GradientDecent::slope() const {
  return slope_;
}

double GradientDecent::y_intercept() const {
  return y_intercept_;
}
