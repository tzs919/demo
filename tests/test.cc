#include <gtest/gtest.h>

#include "demo.h"

TEST(DEMO, should_return_integer3)
{
    EXPECT_EQ(add(1, 2), 3);
}

TEST(DEMO, should_return_integer50)
{
    EXPECT_EQ(add(23, 27), 50);
}