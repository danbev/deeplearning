#include "linear-regression.h"
#include <iostream>

LinearRegression* LinearRegression::add(point p) {
  std::cout << "adding point[x: " << p.x << ", y: " << p.y << ']' <<  '\n';
  data_.push_back(p);
  calculate();
  return this;
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

  double xy_area_sums = 0;
  double x_squared = 0;
  for (int i = 0 ; i < data_.size(); i++) {
    xy_area_sums += (data_[i].x - x_mean) * (data_[i].y - y_mean); 
    x_squared += (data_[i].x - x_mean) * (data_[i].x - x_mean);
  }
  if (x_squared != 0) {
    slope_ = xy_area_sums / x_squared;
    y_intercept_ = y_mean - (slope_ * x_mean);
    std::cout << "slope=" << slope_ << '\n';
    std::cout << "y_intercept=" << y_intercept_ << '\n';
  }
}

double LinearRegression::estimate(int x) const {
  return y_intercept_ + slope_ * x;
}

double LinearRegression::slope() const {
  return slope_;
}

double LinearRegression::y_intercept() const {
  return y_intercept_;
}
