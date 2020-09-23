#include <iostream>
#include"image.h"

using namespace std;

    Image::Image():
        m_x{0}, m_y{0},m_width{0}, m_height{0} {}

    Image::Image(int x,int y,int width,int height):
        m_x{x}, m_y{y},m_width{width}, m_height{height} {}

    Image::Image(const Image &a):
        m_x{a.m_x}, m_y{a.m_y},m_width{a.m_width}, m_height{a.m_height} {}

    void Image::move(int a,int b)
    {
        cout<<"Moving\n";
        m_x+=a;
        m_y+=b;
    }

    void Image::scale(int a)
    {
        cout<<"Scaling\n";
        m_width*=a;
        m_height*=a;
    }

    void Image::resize(int w,int h)
    {
        m_width=w;
        m_height=h;
    }

    void Image::display() const
    {
        cout<<"x="<<m_x<<endl;
        cout<<"y="<<m_y<<endl;
        cout<<"width="<<m_width<<endl;
        cout<<"height="<<m_height<<endl;
    }

