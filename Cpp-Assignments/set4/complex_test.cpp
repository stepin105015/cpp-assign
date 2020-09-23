#include "complex.h"
#include "complex.cpp"
#include "gtest/gtest.h"


TEST(Complex,Default)
{
    Complex <int> a1;
    EXPECT_EQ(0,a1.real());
    EXPECT_EQ(0,a1.imag());
}
TEST(Complex,Parameterised)
{
    Complex <int> a1(5,6);
    EXPECT_EQ(5,a1.real());
    EXPECT_EQ(6,a1.imag());
}


