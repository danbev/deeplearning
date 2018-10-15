#include "util.h"
#include <iostream>

double mean(double arr[], int size) {
  double sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i]; 
  }
  return sum/size;
}
