#include "gtest/gtest.h"
#include "neural-network.h"

TEST(SimpleNetwork, simple) {
  double input = 8.5;
  double weight = 0.1;
  double result = simple_network(input, weight);
  EXPECT_DOUBLE_EQ(result, 0.85);
}
