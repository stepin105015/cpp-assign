#include <iostream>
#include"distance.h"

using namespace std;

    Distance::Distance():m_feets{0},m_inches{0}{}

    Distance::Distance(int f,int i):m_feets{f},m_inches{i}{}

    Distance Distance::operator +(const Distance &a)
    {
        Distance d9;
        d9.m_feets=m_feets+a.m_feets;
        d9.m_inches=m_inches+a.m_inches;
        while(d9.m_inches>=12)
        {
            d9.m_feets+=1;
            d9.m_inches-=12;
        }
        return d9;
    }
    Distance Distance::operator -(const Distance &a)
    {
         Distance c9;
        if(m_inches>=a.m_inches || m_feets<=a.m_feets)
        {
            c9.m_inches=m_inches-a.m_inches;
            c9.m_feets=m_feets-a.m_feets;
            return c9;
        }
        else if (m_inches<=a.m_inches)
        {
            c9.m_inches=m_inches-a.m_inches+12;
            c9.m_feets=m_feets-a.m_feets-1;
            return c9;
        }
        return c9;
    }

     Distance Distance::operator +(int a)
    {
    Distance c9;
        c9.m_inches=m_inches+a;
        c9.m_feets=m_feets+(c9.m_inches/12);
        c9.m_inches%=12;
        return c9;
    }

     Distance Distance::operator -(int a)
    {
        Distance c9;
        if(m_inches>=a)
        {
            c9.m_inches=m_inches-a;
            c9.m_feets=m_feets;
            return c9;
        }
        else if (m_inches<=a)
        {
            c9.m_feets=m_feets-(a/100);
            c9.m_inches=m_inches-(a%100);
            return c9;
        }
        return c9;

    }
     Distance& Distance:: operator ++()
    {
        ++m_inches;
    if(m_inches==12)
       {
           m_feets+=1;
           m_inches=0;
       }
    return *this;
    }

    Distance Distance:: operator ++(int a)
    {
        Distance t9(*this);
    ++m_inches;
    if(m_inches==12)
       {
           m_feets+=1;
           m_inches=0;
       }
    return t9;
    }

    bool Distance::operator ==(const Distance&a)
    {
        return m_feets==a.m_feets && m_inches==a.m_inches;
    }

    bool Distance:: operator <(const Distance&a)
    {
        if(m_feets<a.m_feets )
    {
        return 1;
    }
    else if(m_feets==a.m_feets)
    {
        if(m_inches<a.m_inches)
            return 1;
        else
            return 0;
        }
        return 0;
    }

    bool Distance::operator >(const Distance&a)
    {
        if(m_feets>a.m_feets )
    {
        return 1;
    }
    else if(m_feets==a.m_feets)
    {
        if(m_inches>a.m_inches)
            return 1;
        else
            return 0;
        }
    return 0;
    }



    void Distance::display()const
    {
        cout<<m_feets<<"feets "<<m_inches<<"inches\n";
    }

    int Distance::feets()const{
     return m_feets;}
  int Distance::inches()const{
     return m_inches;}
