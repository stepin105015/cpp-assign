
#include"distance.h"
#include <gtest/gtest.h>


TEST(Distance,plusoperator) {
    Distance c1(10,20);
    Distance c2(10,20);
    Distance c3;
    c3=c1+c2;
    EXPECT_EQ(23,c3.feets());
    EXPECT_EQ(4,c3.inches());

}
TEST(Distance,plus) {
    Distance c1(10,20);
    Distance c3;
    c3=c1+30;
    EXPECT_EQ(14,c3.feets());
    EXPECT_EQ(2,c3.inches());
}
TEST(Distance,minusoperator) {
    Distance c1(10,20);
    Distance c2(10,10);
    Distance c3;
    c3=c1-c2;
    EXPECT_EQ(0,c3.feets());
    EXPECT_EQ(10,c3.inches());

}
TEST(Distance,minus) {//check this
    Distance c1(10,40);
    Distance c3;
    c3=c1-30;
    EXPECT_EQ(10,c3.feets());
    EXPECT_EQ(10,c3.inches());
}

TEST(Distance,PreIncrement) {
    Distance c1(10,20);
    ++c1;
    EXPECT_EQ(10,c1.feets());
    EXPECT_EQ(21,c1.inches());

}
TEST(Distance,PostIncrement) {
    Distance t1(10,20);
    Distance t2;
    t2=t1++;
    EXPECT_EQ(10,t2.feets());
    EXPECT_EQ(20,t2.inches());
    EXPECT_EQ(10,t1.feets());
    EXPECT_EQ(21,t1.inches());

}
TEST(Distance,Equality) {
    Distance t1(10,20);
    Distance t2(10,20);
    Distance t3(11,20);
    EXPECT_EQ(1,t1==t2);
    EXPECT_EQ(0,t1==t3);
}
TEST(Distance,LessThan) {
    Distance t1(10,20);
    Distance t2(11,20);
    Distance t3(9,20);
    EXPECT_EQ(1,t1<t2);
    EXPECT_EQ(0,t1<t3);
}
TEST(Distance,GreaterThan) {
    Distance t1(10,50);
    Distance t2(10,20);
    Distance t3(11,20);
    EXPECT_EQ(1,t1>t2);
    EXPECT_EQ(0,t1>t3);
}

