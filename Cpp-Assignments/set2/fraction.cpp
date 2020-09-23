#include <iostream>
#include"fraction.h"
using namespace std;

    Fraction::Fraction():m_numerator{0},m_denominator{0}{}

    Fraction::Fraction(int n):m_numerator{n},m_denominator{0}{}

    Fraction::Fraction(int n,int d):m_numerator{n},m_denominator{d}{}


    Fraction Fraction::operator+(const Fraction&a)
    {
        Fraction f1;
        f1.m_denominator=a.m_denominator*m_denominator;
        f1.m_numerator=a.m_denominator*m_numerator+m_denominator*a.m_numerator;
        return f1;
    }


   Fraction Fraction:: operator -(const Fraction &a)
    {
        Fraction f1;
        f1.m_denominator=a.m_denominator*m_denominator;
        f1.m_numerator=a.m_denominator*m_numerator-m_denominator*a.m_numerator;
        return f1;
    }
    int Fraction::numerator()const
    {
        return m_numerator;
    }
    int Fraction::denominator()const
    {
      return m_denominator;
    }
    Fraction Fraction::operator*(const Fraction&a)
   {
        Fraction f1;
        f1.m_denominator=a.m_denominator*m_denominator;
        f1.m_numerator=m_numerator*a.m_numerator;
        return f1;
  }

  Fraction Fraction::operator+(int a)
  {
        Fraction f1;
        f1.m_denominator=m_denominator;
        f1.m_numerator=m_numerator+m_denominator*a;
        return f1;
  }
  Fraction Fraction::operator-(int a)
  {
        Fraction f1;
        f1.m_denominator=m_denominator;
        f1.m_numerator=m_numerator-m_denominator*a;
        return f1;
  }

    bool Fraction::operator==(const Fraction&a)
    {
        return m_numerator==a.m_numerator && m_denominator==a.m_denominator;
    }

    bool Fraction::operator<(const Fraction&a)
    {
        return(((double(m_numerator)/double(m_denominator)))<((double(a.m_numerator)/double(a.m_denominator))));
    }


    bool Fraction::operator>(const Fraction&a)
    {
        return(((double(m_numerator)/double(m_denominator)))>((double(a.m_numerator)/double(a.m_denominator))));
    }

    Fraction Fraction::simplify()
    {
        Fraction f1;
        f1.m_numerator=double(m_numerator)/double(m_denominator);
        f1.m_denominator=1;
        return f1;
    }

    bool Fraction::isSimplest()const
    {
        if (m_numerator%m_denominator==0)
        {
            return 0;
        }
        return 1;
    }

    void Fraction::display()const
    {
        cout<<"numerator:"<<m_numerator<<"denominator="<<m_denominator;
    }
