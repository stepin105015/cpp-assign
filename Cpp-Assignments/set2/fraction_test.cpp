
#include"fraction.h"
#include <gtest/gtest.h>


TEST(Fraction,plusoperator) {
    Fraction c1(3,4);
    Fraction c2(4,5);
    Fraction c3;
    c3=c1+c2;
    EXPECT_EQ(31,c3.numerator());
    EXPECT_EQ(20,c3.denominator());

}

TEST(Fraction,minusoperator) {
    Fraction c1(5,3);
    Fraction c2(3,4);
    Fraction c3;
    c3=c1-c2;
    EXPECT_EQ(11,c3.numerator());
    EXPECT_EQ(12,c3.denominator());
}
TEST(Fraction,multiplyoperator) {
    Fraction c1(5,3);
    Fraction c2(3,4);
    Fraction c3;
    c3=c1*c2;
    EXPECT_EQ(15,c3.numerator());
    EXPECT_EQ(12,c3.denominator());
}
TEST(Fraction,plus) {
    Fraction c1(5,2);
    Fraction c3;
    c3=c1+5;
    EXPECT_EQ(15,c3.numerator());
    EXPECT_EQ(2,c3.denominator());
}
TEST(Fraction,minus) {
    Fraction c1(5,2);
    Fraction c3;
    c3=c1-5;
    EXPECT_EQ(-5,c3.numerator());
    EXPECT_EQ(2,c3.denominator());
}
TEST(Fraction,Equality) {
    Fraction t1(10,20);
    Fraction t2(10,20);
    Fraction t3(11,20);
    EXPECT_EQ(1,t1==t2);
    EXPECT_EQ(0,t1==t3);
}
TEST(Fraction,LessThan) {
    Fraction t1(10,20);
    Fraction t2(11,20);
    Fraction t3(9,20);
    EXPECT_EQ(1,t1<t2);
    EXPECT_EQ(0,t1<t3);
}
TEST(Fraction,GreaterThan) {
    Fraction t1(10,50);
    Fraction t2(10,20);
    Fraction t3(11,60);
    EXPECT_EQ(0,t1>t2);
    EXPECT_EQ(1,t1>t3);
}
TEST(Fraction,isSimplest) {
    Fraction t1(50,10);
    Fraction t2(5,4);

    EXPECT_EQ(0,t1.isSimplest());
    EXPECT_EQ(1,t2.isSimplest());
}
