#include "gstack.h"
#include "gtest/gtest.h"
#include "gstack.cpp"


TEST(MyStack,ParameterConstructor)
{
    MyStack <int> a(2);
    a.push(3);
    a.push(4);
    EXPECT_EQ(4,a.pop());
}


