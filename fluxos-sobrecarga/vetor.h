#ifndef VETOR_H
#define VETOR_H
#include <iostream>

class Vetor
{
  float x, y;
public:
  Vetor(float mx=0, float my=0);
  void print();
  friend std::ostream& operator<<(std::ostream& os,
                         Vetor v1);
  friend std::istream& operator>>(std::istream& is,
                         Vetor &v1);
};

#endif // VETOR_H
