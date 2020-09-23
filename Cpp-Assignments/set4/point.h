#ifndef __POINT_H
#define __POINT_H

enum Quadrant {
  Q1=1,
  Q2=2,
  Q3=3,
  Q4=4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  double distanceFromOrigin();
  Quadrant quadrant();
  void display();
};

#endif
