#ifndef SRC_LINEAR_REGRESSION_H_
#define SRC_LINEAR_REGRESSION_H_
#include <string>
#include <vector>

struct point {
   double x;
   double y;
};

class LinearRegression {
 public:
   LinearRegression() = default;
   ~LinearRegression() = default;
   LinearRegression* add(point p);
   double estimate(int x) const;
   double slope() const;
   double y_intercept() const;
 private:
   std::vector<point> data_;
   double slope_ = 0;
   double y_intercept_ = 0;
   void calculate();
};

#endif // SRC_LINEAR_REGRESSION_H_

