#include <iostream>
#include"complex.h"

using namespace std;

    Complex::Complex():m_real{0},m_imag{0}{}

    Complex::Complex(int r,int i):m_real{r},m_imag{i}{}

    Complex::Complex(int r):m_real{r}{}

    Complex Complex::operator+(const Complex&a)
    {
        Complex c3;
        c3.m_real=m_real+a.m_real;
        c3.m_imag=m_imag+a.m_imag;
        return c3;
    }
    Complex Complex::operator-(const Complex&a)
    {
        Complex c3;
        c3.m_real=m_real-a.m_real;
        c3.m_imag=m_imag-a.m_imag;
        return c3;
    }
    Complex Complex::operator*(const Complex&a)
    {
        Complex c3;
        c3.m_real=m_real*a.m_real - m_imag*a.m_imag;
        c3.m_imag = m_real * a.m_imag + m_imag * a.m_real;
        return c3;
    }

    Complex & Complex::operator++() {   //pre increment
    ++m_real;
    return *this;
    }

     Complex Complex::operator++(int a) {  //post increment
    Complex c9(*this);
    ++m_real;
    return c9;
    }

    bool Complex::operator==(const Complex& a)
    {
      return m_real==a.m_real && m_imag==a.m_imag ;
    }

    void Complex::
        dispay() const
    {
        cout<<m_real<<"+"<<m_imag<<"i\n";
    }

     int Complex::Complex::real()const{
     return m_real;}
     int Complex::Complex::imag()const{
     return m_imag;}

