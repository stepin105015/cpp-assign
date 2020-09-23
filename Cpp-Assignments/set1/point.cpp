#include <iostream>
#include<cmath>
#include"point.h"

using namespace std;

    Point::Point():
        m_x{0}, m_y{0}{}

    Point::Point(int x,int y):
        m_x{x}, m_y{y} {}

    Point::Point(const Point &a):
        m_x{a.m_x}, m_y{a.m_y}{}

    double Point::distanceFromOrigin() const
    {
        return sqrt((m_x*m_x)+(m_y*m_y));
    }

    Quadrant Point:: quadrant() const
    {
        if (m_x>0 && m_y>0)
        {
            return Q1;
        }
        else if(m_x<0 && m_y>0)
            {
            return Q2;
        }
        else if(m_x<0 && m_y<0)
            {
            return Q3;
        }
        else
            {
            return Q4;
        }
    }

    bool Point::isOrigin() const
    {
        return m_x==0 && m_y==0;
    }

    bool Point::isOnXAxis() const
    {
        return m_x==0;
    }

    bool Point::isOnYAxis() const
    {
        return m_y==0;
    }
    void Point::display() const
    {
        cout<<"x="<<m_x<<endl;
        cout<<"y="<<m_y<<endl;
    }
