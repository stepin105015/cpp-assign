#include <iostream>
#include"currency.h"

using namespace std;

    Currency::Currency():m_rupees{0},m_paise{0}{}

    Currency::Currency(int r,int p):m_rupees{r},m_paise{p}{}

    Currency::Currency(int r):m_rupees{r},m_paise{0}{}

    Currency Currency::operator +(const Currency &a)
    {
        Currency c9;
        c9.m_paise=m_paise+a.m_paise;
        c9.m_rupees=m_rupees+a.m_rupees+(c9.m_paise/100);
        c9.m_paise%=100;
        return c9;
    }


    Currency Currency::operator -(const Currency &a)
    {
        Currency c9;
        if(m_paise>=a.m_paise || m_rupees<=a.m_rupees)
        {
            c9.m_paise=m_paise-a.m_paise;
            c9.m_rupees=m_rupees-a.m_rupees;
            return c9;
        }
        else if (m_paise<=a.m_paise)
        {
            c9.m_paise=m_paise-a.m_paise+100;
            c9.m_rupees=m_rupees-a.m_rupees-1;
            return c9;
        }
        return c9;
    }
     Currency Currency::operator +(int a)
    {
        Currency c9;
        c9.m_paise=m_paise+a;
        c9.m_rupees=m_rupees+(c9.m_paise/100);
        c9.m_paise%=100;
        return c9;
    }

     Currency Currency::operator -(int a)
    {
        Currency c9;
        if(m_paise>=a)
        {
            c9.m_paise=m_paise-a;
            c9.m_rupees=m_rupees;
            return c9;
        }
        else if (m_paise<=a)
        {
            c9.m_rupees=m_rupees-(a/100);
            c9.m_paise=m_paise-(a%100);


            return c9;
        }
        return c9;
    }

    Currency & Currency::operator++() {   //pre increment
    ++m_paise;
    if(m_paise==100)
       {
           m_rupees+=1;
           m_paise=0;
       }

    return *this;
    }

     Currency Currency::operator++(int a) {  //post increment
    Currency t9(*this);
    ++m_paise;
    if(m_paise==100)
       {
           m_rupees+=1;
           m_paise=0;
       }
    return t9;
    }

    bool Currency::operator==(const Currency& a)
    {
      return m_rupees==a.m_rupees && m_paise==a.m_paise ;
    }

    bool Currency::operator < (const Currency &a) {
    if(m_rupees<a.m_rupees )
    {
        return 1;
    }
    else if(m_rupees==a.m_rupees)
    {
        if(m_paise<a.m_paise)
            return 1;
        else
            return 0;
        }
        return 0;
    }
     bool Currency::operator > (const Currency &a) {
    if(m_rupees>a.m_rupees )
    {
        return 1;
    }
    else if(m_rupees==a.m_rupees)
    {
        if(m_paise>a.m_paise)
            return 1;
        else
            return 0;
        }
    return 0;
  }
    void Currency::display()const
    {
        std::cout<<m_rupees<<"Rs "<<m_paise<<"Paisa\n";
    }
     int Currency::rupees()const{
     return m_rupees;}
  int Currency::paisa()const{
     return m_paise;}
