#ifndef __DISTANCE_H
#define __DISTANCE_H

class Distance {
  int m_feets;
  int m_inches;
  public:
  Distance();
  Distance(int,int);
  Distance(int);
  Distance operator+(const Distance&);
  Distance operator-(const Distance&);
  Distance operator+(int);
  Distance operator-(int);
  Distance& operator++();
  Distance operator++(int);
  bool operator==(const Distance&);
  bool operator<(const Distance&);
  bool operator>(const Distance&);
  void display() const;
  int feets()const;
  int inches()const;
 // friend std::ostream& operator<<(const std::ostream&, const Distance&);
};

#endif

