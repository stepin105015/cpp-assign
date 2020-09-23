#include <iostream>
#include<string>
#include"account.h"
using namespace std;


    Account::Account():
        m_accNumber{"Nil"}, m_accName{"Nil"}, m_balance{0} {}

    Account::Account(string accnum,string accname,double balance):
        m_accNumber{accnum}, m_accName{accname}, m_balance{balance} {}

    Account::Account(string accnum,string accname):
        m_accNumber{accnum}, m_accName{accname}, m_balance{0} {}

    Account::Account(const Account &a):
        m_accNumber{a.m_accNumber}, m_accName{a.m_accName}, m_balance{a.m_balance} {}

    void Account::debit(double w)
    {
        m_balance-=w;
        cout<<m_balance<<endl;

    }

    void Account::credit(double c)
    {
        m_balance+=c;
        cout<<m_balance<<endl;

    }

    double Account::getBalance()const
    {
        cout<<m_balance<<endl;
        return m_balance;
    }

    void Account::display()const
    {
        cout<<m_accNumber<<endl;
        cout<<m_accName<<endl;
        cout<<m_balance<<endl;
    }




