#include <iostream>
#include"box.h"
using namespace std;

    Box::Box():
        m_length{0}, m_breadth{0}, m_height{0} {}

    Box::Box(int l,int b,int h):
        m_length{l}, m_breadth{b}, m_height{h} {}

    Box::Box(int l):
        m_length{l}, m_breadth{0},m_height{0} {}

    Box::Box(const Box &a):
        m_length{a.m_length}, m_breadth{a.m_breadth}, m_height{a.m_height} {}


    int Box::length() const
    {
        return m_length;
    }

    int Box::breadth()const
    {
        return m_breadth;
    }

    int Box::height()const
    {
        return m_height;
    }

    void Box::display()const

    {
        cout<<"length="<<m_length<<endl;
        cout<<"breadth="<<m_breadth<<endl;
        cout<<"height="<<m_height<<endl;
    }
    int Box::volume()const
    {
        int vol=0;
        vol=m_length*m_breadth*m_height;
        cout<<vol<<endl;
        return vol;
    }



