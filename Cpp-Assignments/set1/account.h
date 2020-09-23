#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>

class Account {
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  Account();
  Account(std::string,std::string,double);
  explicit Account(std::string,std::string);
  explicit Account(const Account&);
  void debit(double);
  void credit(double);
  double getBalance() const;
  void display() const;
};

#endif


