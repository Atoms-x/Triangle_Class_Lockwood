/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  9 APRIL 2020
  IDE: Repl.it 
  Program:  Header for Class of QUIZ 3
  https://repl.it/@ChetLockwood/TriangleClassLockwood
*/

#ifndef STATUS_H
#define STATUS_H

#include "Triangle.h"

class Status
{
  private:
    Triangle pt1;
    Triangle pt2;
    Triangle pt3;
  public:
    Status() 
    {
    }

    void setT1(Triangle t1)
      {pt1 = t1;}
    void setT2(Triangle t2)
      {pt2 = t2;}
    void setT3(Triangle t3)
      {pt3 = t3;}
    
    Triangle getT1() const
      {return pt1;}
    Triangle getT2() const
      {return pt2;}
    Triangle getT3() const
      {return pt3;}
    
    void drawStatus()
    {
      cout << cClear << cReset << cUnderL << "Area of a Triangle - (bh/2)\n\n";

      cout << cReset << cBlue << "Triangle 1 Base: " << pt1.getBase() << "\n";
      cout << "Triangle 1 Height: " << pt1.getHeight() << "\n";
      cout << "Triangle 1 Area: " << pt1.getArea() << "\n";

      cout << cRed << "Triangle 2 Base: " << pt2.getBase() << "\n";
      cout << "Triangle 2 Height: " << pt2.getHeight() << "\n";
      cout << "Triangle 2 Area: " << pt2.getArea() << "\n";

      cout << cGreen << "Triangle 3 Base: " << pt3.getBase() << "\n";
      cout << "Triangle 3 Height: " << pt3.getHeight() << "\n";
      cout << "Triangle 3 Area: " << pt3.getArea() << "\n\n\n\n";
    }
    
    void menu(Status &t)
    {
      double b = 0, h = 0;
      char decision = '\0';
      static int count = 0;
      string cColor = "";
      string triangle = "";

      if (count == 0)
      {
        cColor = cBlue;
        triangle = "triangle 1:\t";
      }  
      
      else if (count == 1)
      {
        cColor = cRed;
        triangle = "triangle 2:\t";
      }
      else
      {
        cColor = cGreen;
        triangle = "triangle 3:\t";
      }
      
      do
      {
        drawStatus();

        cout << cColor << "Enter the base length of " << triangle;
        validateDouble(b);
        pt.setBase(b);

        drawStatus();

        cout << cColor << "Enter the height of"  << triangle;
        validateDouble(h);
        t.setHeight(h);

        drawStatus();

        cout << cColor << "Are you sure about these measurements?\t";
        validateChar(decision);

      }while(decision != 'y' && decision != 'Y');

      count++;
    }

    };
#endif 