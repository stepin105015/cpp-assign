#include "point.h"
#include"point.cpp"
#include <gtest/gtest.h>

TEST(Point,defaultDistanceQuadrant) {
    Point <int>p2;
    p2.display();
    EXPECT_EQ(0.0,p2.distanceFromOrigin());
    EXPECT_EQ(1,p2.quadrant());
}

TEST(Point,ParameterisedDistanceQuadrant) {
    Point <int>p2(4,3);
    EXPECT_EQ(5.0,p2.distanceFromOrigin());
    EXPECT_EQ(1,p2.quadrant());
}


