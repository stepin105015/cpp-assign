#include"complex.h"
#include <gtest/gtest.h>


TEST(Complex,plusoperator) {
    Complex t1(10,20);
    Complex t2(10,20);
    Complex t3;
    t3=t1+t2;
    EXPECT_EQ(20,t3.real());
    EXPECT_EQ(40,t3.imag());

}
TEST(Complex,minusoperator) {
    Complex t1(10,20);
    Complex t2(10,10);
    Complex t3;
    t3=t1-t2;
    EXPECT_EQ(0,t3.real());
    EXPECT_EQ(10,t3.imag());

}
TEST(Complex,multiplyoperator) {
    Complex t1(10,2);
    Complex t2(10,3);
    Complex t3;
    t3=t1*t2;
    EXPECT_EQ(94,t3.real());
    EXPECT_EQ(50,t3.imag());

}
TEST(Complex,PreIncrement) {
    Complex t1(10,20);
    ++t1;
    EXPECT_EQ(11,t1.real());

}
TEST(Complex,PostIncrement) {
    Complex t1(10,20);
    Complex t2;
    t2=t1++;
    EXPECT_EQ(10,t2.real());
    EXPECT_EQ(11,t1.real());
}
TEST(Complex,Equality) {
    Complex t1(10,20);
    Complex t2(10,20);
    Complex t3(11,20);
    EXPECT_EQ(1,t1==t2);
    EXPECT_EQ(0,t1==t3);
}
