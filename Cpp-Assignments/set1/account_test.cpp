#include "account.h"
#include <gtest/gtest.h>

TEST(Account,DefaultConstructor) {
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());
    a1.credit(100);
    EXPECT_EQ(100.0,a1.getBalance());
    a1.debit(50);
    EXPECT_EQ(50.0,a1.getBalance());
}

TEST(Account,ParameterizedConstructor) {
    Account a2("A","Hafz",100);
    EXPECT_EQ(100.0,a2.getBalance());
    a2.credit(100);
    EXPECT_EQ(200.0,a2.getBalance());
    a2.debit(50);
    EXPECT_EQ(150.0,a2.getBalance());
}

TEST(Account,CopyConstructor) {
    Account a2("A","Hafz",100);
    Account a1(a2);
    EXPECT_EQ(100.0,a1.getBalance());
    a1.credit(100);
    EXPECT_EQ(200.0,a1.getBalance());
    a1.debit(50);
    EXPECT_EQ(150.0,a1.getBalance());
}
