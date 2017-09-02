#include "gtest/gtest.h"
#include "neural-network.h"

TEST(SimpleNetwork, simple_network) {
  double input = 8.5;
  double weight = 0.1;
  double prediction = simple_network(input, weight);
  EXPECT_DOUBLE_EQ(prediction, 0.85);
}
