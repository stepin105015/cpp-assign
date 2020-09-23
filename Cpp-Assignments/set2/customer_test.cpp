#include "customer.h"
#include <gtest/gtest.h>

TEST(Customer,DefaultConstructor) {
    Customer c1;
    c1.credit(100);
    c1.makeCall(10);
    EXPECT_EQ(90.0,c1.getBalance());

}

TEST(Customer,ParameterisedConstructor) {
    Customer c2("10","la","812",100);
    c2.credit(100);
    c2.makeCall(20);
    EXPECT_EQ(180.0,c2.getBalance());

}

TEST(Customer,CopyConstructor) {
    Customer c2("10","la","812",100);
    Customer c3(c2);
    c3.credit(1000);
    c3.makeCall(300);
    EXPECT_EQ(800.0,c3.getBalance());

}

