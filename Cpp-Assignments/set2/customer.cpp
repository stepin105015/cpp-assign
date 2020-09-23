#include <iostream>
#include"customer.h"

using namespace std;

    Customer::Customer():
        m_custId{"Nil"},m_custName{"Nil"},m_phone{"Nil"},m_balance{0}{}

    Customer::Customer(string a,string b,string c,double d):
        m_custId{a},m_custName{b},m_phone{c},m_balance{d} {}

    Customer::Customer(string a,string b,string c):
        m_custId{a},m_custName{b},m_phone{c},m_balance{0}{}

    Customer::Customer(const Customer &a):
        m_custId{a.m_custId},m_custName{a.m_custName},m_phone{a.m_phone},m_balance{a.m_balance}{}



   void Customer::credit(double a)
    {
         m_balance+=a;
    }
   void Customer::makeCall(double a)
    {
        cout<<"Calling"<<"\n";
        m_balance=m_balance-(a);
    }
    double Customer::getBalance() const
    {
       return m_balance;

    }

    void Customer::display()const
    {
        cout<<m_custId<<endl;
        cout<<m_custName<<endl;
        cout<<m_phone<<endl;
        cout<<m_type<<endl;
        cout<<m_balance<<endl;
    }
