#include "linear-regression.h"
#include <iostream>

LinearRegression LinearRegression::add(point p) {
  std::cout << "adding point[x: " << p.x << ", y: " << p.y << ']' <<  '\n';
  data_.push_back(p);
  calculate();
  return *this;
}

void LinearRegression::calculate() {
  double x_sum = 0;
  double y_sum = 0;
  for (int i = 0 ; i < data_.size(); i++) {
    x_sum += data_[i].x;
    y_sum += data_[i].y;
  } 
  double x_mean = x_sum / data_.size();
  double y_mean = y_sum / data_.size();
  std::cout << "x_mean=" << x_mean << '\n';
  std::cout << "y_mean=" << y_mean << '\n';

  double dist_to_means = 0;
  double x_dist_squared = 0;
  for (int i = 0 ; i < data_.size(); i++) {
    dist_to_means += (data_[i].x - x_mean) * (data_[i].y - y_mean); 
    x_dist_squared += (data_[i].x - x_mean) * (data_[i].x - x_mean);
  }
  if (x_dist_squared != 0) {
    m_ = dist_to_means / x_dist_squared;
    b_ = y_mean - (m_ * x_mean);
    std::cout << "m=" << m_ << '\n';
    std::cout << "b=" << b_ << '\n';
  }
}
