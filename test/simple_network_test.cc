#include "gtest/gtest.h"
#include "neural-network.h"
#include <iostream>

TEST(SimpleNetwork, simple) {
  int input[] = {1, 2, 3};
  int result = simple_network(input, 10);
  std::cout << "result :" << result << '\n';
  EXPECT_EQ(true, true);
}
