#include "image.h"
#include <gtest/gtest.h>

TEST(Image,DefaultConstructor) {
    Image i1;

}

TEST(Point,ParameterisedConstructor) {
    Image i2(10,10,2,5);

}

TEST(Point,CopyConstructor) {
    Image i2(3,4,5,4);
    Image i3(i2);

}
