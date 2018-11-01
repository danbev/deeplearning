#ifndef SRC_GRADIENT_DECENT_H_
#define SRC_GRADIENT_DECENT_H_
#include <string>
#include <vector>

struct point {
   double x;
   double y;
};

class GradientDecent {
 public:
   GradientDecent() = default;
   ~GradientDecent() = default;
   GradientDecent* add(point p);
   double estimate(int x) const;
   double slope() const;
   double y_intercept() const;
 private:
   std::vector<point> data_;
   double slope_ = 0;
   double y_intercept_ = 0;
   void calculate();
};

#endif // SRC_GRADIENT_DECENT_H_

