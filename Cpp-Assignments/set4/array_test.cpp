
#include "array.h"
#include"array.cpp"
#include <gtest/gtest.h>

TEST(MyArray,arraylength4) {
    MyArray <int>a1(4);
    a1.append(5);
    a1.append(3);
    a1.append(6);
    a1.append(1);

    EXPECT_EQ(5,a1.at(0));
    EXPECT_EQ(1,a1.search(3));
    EXPECT_EQ(0,a1.search(10));
    EXPECT_EQ(15,a1.sum());
    EXPECT_EQ(1,a1.min());
    EXPECT_EQ(6,a1.max());
}
TEST(MyArray,arraylength5) {
    MyArray <float>a2(5);
    a2.append(11);
    a2.append(12);
    a2.append(13);
    a2.append(14);
    a2.append(15);

    EXPECT_EQ(11,a2.at(0));
    EXPECT_EQ(1,a2.search(13));
    EXPECT_EQ(0,a2.search(10));
    EXPECT_EQ(65,a2.sum());
    EXPECT_EQ(11,a2.min());
    EXPECT_EQ(15,a2.max());
}


