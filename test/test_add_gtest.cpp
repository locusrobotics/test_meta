#include <gtest/gtest.h>

TEST(TestAddGtest, test1)
{
  EXPECT_TRUE(true);
}

int main(int argc, char** argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
