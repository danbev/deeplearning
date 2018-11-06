#include "util.h"
#include <iostream>
#include <cmath>
#include <immintrin.h>

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

double dot(double* a, double* b, int size) {
  const int mask = 0xFF;
  double d = 0.0;
  if (size == 1) {
    return a[0] * b[0];
  }

  for (int i = 0; i < size; i+=2) {
    __m128d v1 = _mm_setr_pd(a[i], a[i+1]);
    __m128d v2 = _mm_setr_pd(b[i], b[i+1]);
    __m128d result = _mm_dp_pd(v1, v2, mask);
    d += _mm_cvtsd_f64(result);
  }
  return d;
}
