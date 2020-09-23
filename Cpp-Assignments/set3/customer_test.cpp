#include "customer.h"
#include"postpaid.h"
#include"prepaid.h"
#include <gtest/gtest.h>

TEST(Customer,Postpaid) {
    PostpaidCustomer p1("105","Raj","812",500,15);
    p1.postpaidbill(400);
    p1.credit(100);
    p1.makeCall(10);
    EXPECT_EQ(190,p1.getBalance());

}

TEST(Customer,Prepaid) {
    PostpaidCustomer p1("105","Raj","812",100,15);
    p1.credit(200);
    p1.makeCall(30);
    EXPECT_EQ(270,p1.getBalance());
}


