#include"currency.h"
#include <gtest/gtest.h>


TEST(Currency,plusoperator) {
    Currency c1(10,20);
    Currency c2(10,20);
    Currency c3;
    c3=c1+c2;
    EXPECT_EQ(20,c3.rupees());
    EXPECT_EQ(40,c3.paisa());

}
TEST(Currency,plus) {
    Currency c1(10,20);
    Currency c3;
    c3=c1+30;
    EXPECT_EQ(10,c3.rupees());
    EXPECT_EQ(50,c3.paisa());
}
TEST(Currency,minusoperator) {
    Currency c1(10,20);
    Currency c2(10,10);
    Currency c3;
    c3=c1-c2;
    EXPECT_EQ(0,c3.rupees());
    EXPECT_EQ(10,c3.paisa());

}
TEST(Currency,minus) {//check this
    Currency c1(10,40);
    Currency c3;
    c3=c1-30;
    EXPECT_EQ(10,c3.rupees());
    EXPECT_EQ(10,c3.paisa());
}

TEST(Currency,PreIncrement) {
    Currency c1(10,20);
    ++c1;
    EXPECT_EQ(10,c1.rupees());
    EXPECT_EQ(21,c1.paisa());

}
TEST(Currency,PostIncrement) {
    Currency t1(10,20);
    Currency t2;
    t2=t1++;
    EXPECT_EQ(10,t2.rupees());
    EXPECT_EQ(20,t2.paisa());
    EXPECT_EQ(10,t1.rupees());
    EXPECT_EQ(21,t1.paisa());

}
TEST(Currency,Equality) {
    Currency t1(10,20);
    Currency t2(10,20);
    Currency t3(11,20);
    EXPECT_EQ(1,t1==t2);
    EXPECT_EQ(0,t1==t3);
}
TEST(Currency,LessThan) {
    Currency t1(10,20);
    Currency t2(11,20);
    Currency t3(9,20);
    EXPECT_EQ(1,t1<t2);
    EXPECT_EQ(0,t1<t3);
}
TEST(Currency,GreaterThan) {
    Currency t1(10,50);
    Currency t2(10,20);
    Currency t3(11,20);
    EXPECT_EQ(1,t1>t2);
    EXPECT_EQ(0,t1>t3);
}

