#ifndef __FRACTION_H
#define __FRACTION_H

class Fraction {
  int m_numerator;
  int m_denominator;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator-(int);
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest() const;
  void display() const;
  int numerator()const;
  int denominator()const;
 // friend std::ostream& operator<<(const std::ostream&, const Fraction&);
};

#endif
