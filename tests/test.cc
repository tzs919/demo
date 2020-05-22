#include <gtest/gtest.h>

#include "demo.h"

TEST(DEMO, should_return_integer)
{
    EXPECT_EQ(add(1, 2), 3);
}