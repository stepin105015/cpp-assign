#include "point.h"
#include <gtest/gtest.h>

TEST(Point,DefaultConstructor) {
    Point p1;
    EXPECT_EQ(0.0,p1.distanceFromOrigin());
    EXPECT_EQ(1,p1.isOrigin());
    EXPECT_EQ(1,p1.isOnXAxis());
    EXPECT_EQ(1,p1.isOnYAxis());
}

TEST(Point,ParameterisedConstructor) {
    Point p2(-3,-4);
    EXPECT_EQ(5.0,p2.distanceFromOrigin());
    EXPECT_EQ(3,p2.quadrant());
    EXPECT_EQ(0,p2.isOrigin());
    EXPECT_EQ(0,p2.isOnXAxis());
    EXPECT_EQ(0,p2.isOnYAxis());

}

TEST(Point,CopyConstructor) {
    Point p2(3,4);
    Point p3(p2);
    EXPECT_EQ(5.0,p3.distanceFromOrigin());
    EXPECT_EQ(1,p3.quadrant());
    EXPECT_EQ(0,p3.isOrigin());
    EXPECT_EQ(0,p3.isOnXAxis());
    EXPECT_EQ(0,p3.isOnYAxis());

}

