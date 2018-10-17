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
   LinearRegression add(point p);
   double m() { return m_; }
   double b() { return b_; }
 private:
   std::vector<point> data_;
   double m_;
   double b_;
   void calculate();
};

#endif // SRC_LINEAR_REGRESSION_H_

