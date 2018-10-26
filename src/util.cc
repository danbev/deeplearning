#include "util.h"
#include <iostream>
#include <cmath>

const double e = std::exp(1.0);

double mean(double arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i]; 
  }
  return sum/size;
}

double sigmoid(double t) {
  double result = 1/(1 + pow(e, (t * -1)));
  return result;
}

double sigmoid_prime(double sigmoid) {
  return sigmoid * (1 - sigmoid);
}
