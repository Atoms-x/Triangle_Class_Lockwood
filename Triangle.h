/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  9 APRIL 2020
  IDE: Repl.it 
  Program:  Header for Class of QUIZ 3
  https://repl.it/@ChetLockwood/TriangleClassLockwood
*/

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "Input_Validation_Extended.h"

class Triangle
{
  private:
    double base;
    double height;
  public:
    Triangle() 
    {
      base = 0;
      height = 0;
    }

    void setBase(double b)
      {base = b;}
    void setHeight(double h)
      {height = h;}
    
    double getBase() const
      {return base;}
    double getHeight() const
      {return height;}
    double getArea() const
      {return ((base * height) / 2);}
};
#endif 