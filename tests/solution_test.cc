#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(SwapTest, HandlesIntSwap) {
  Solution solution;
  int x=4;
  int y=5;
  solution.Swap(&x,&y);
  int actual_x=x; 
  int expected_x=5;
  EXPECT_EQ(expected_x, actual_x);
  int actual_y=y; 
  int expected_y=4;
  EXPECT_EQ(expected_y, actual_y);
}