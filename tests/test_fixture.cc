#include <gtest/gtest.h>

#include "demo.h"

class DemoTest : public testing::Test
{
protected:
    void SetUp()
    {
    }

    void TearDown()
    {
    }
};

TEST_F(DemoTest, Test1)
{
    EXPECT_EQ(add(1, 2), 3);
}