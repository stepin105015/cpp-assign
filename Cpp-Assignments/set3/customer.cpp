#include <iostream>
#include"customer.h"
#include"prepaid.h"
#include"postpaid.h"

using namespace std;

    CustomerBase::CustomerBase():
        m_custId{"Nil"},m_custName{"Nil"},m_phone{"Nil"},m_balance{0}{}

    CustomerBase::CustomerBase(string custId,string custName,string phone,double balance):
        m_custId{custId},m_custName{custName},m_phone{phone},m_balance{balance} {}

    CustomerBase::CustomerBase(string custId,string custName,string phone):
        m_custId{custId},m_custName{custName},m_phone{phone},m_balance{0}{}

    CustomerBase::CustomerBase(const CustomerBase &a):
        m_custId{a.m_custId},m_custName{a.m_custName},m_phone{a.m_phone},m_balance{a.m_balance}{}


    PrepaidCustomer::PrepaidCustomer():
        CustomerBase(){}

    PrepaidCustomer::PrepaidCustomer(string custId,string custName,string phone,double balance):
        CustomerBase(custId,custName,phone,balance){}

    PrepaidCustomer::PrepaidCustomer(string custId,string custName,string phone):
        CustomerBase(custId,custName,phone){}


    PostpaidCustomer::PostpaidCustomer():
        CustomerBase(){}

    PostpaidCustomer::PostpaidCustomer(string custId,string custName,string phone,double balance,int billdate):
        CustomerBase(custId,custName,phone,balance),m_billDate{billdate}{}

    PostpaidCustomer::PostpaidCustomer(string custId,string custName,string phone):
        CustomerBase(custId,custName,phone) {}

    void CustomerBase::display()const
    {
        cout<<m_custId<<endl;
        cout<<m_custName<<endl;
        cout<<m_phone<<endl;
        cout<<m_balance<<endl;
    }
    void PostpaidCustomer::display() const{
    cout<<"Postpaid Customer\nBill due on "<<m_billDate<<endl;}

    void PostpaidCustomer::billPay(double a){
        postpaidbill(a);
        cout<<"Bill Paid\n";}

    void CustomerBase::postpaidbill(double a){
    m_balance-=a;
    }

    void PrepaidCustomer::display() const{
    cout<<"Prepaid Customer\n";}

    double CustomerBase::getBalance() const
    {
        cout<<m_balance<<endl;
        return m_balance;
    }
   void CustomerBase::credit(double a)
    {
         m_balance+=a;
    }
   void CustomerBase::makeCall(double a)
    {
        cout<<"Calling"<<"\n";
        m_balance=m_balance-(a);
    }
