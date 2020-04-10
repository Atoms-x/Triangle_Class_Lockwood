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
    Status() {}
    
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
    
    void menu()
    {
      double b = 0, h = 0;
      char decision = '\0';
      static int count = 0;
    
      do
      {
        if (count == 0)
        {
          do
          {
            drawStatus();

            cout << cBlue << "Enter the base length of triangle 1:\t";
            validateDouble(b);
            pt1.setBase(b);

            drawStatus();

            cout << cBlue << "Enter the height of triangle 1:\t";
            validateDouble(h);
            pt1.setHeight(h);

            drawStatus();

            cout << cBlue << "Are you sure about these measurements?\t";
            validateChar(decision);

          } while(decision != 'y' && decision != 'Y');

          count++;
        }
        
        else if (count == 1)
        {
          do
          {
            drawStatus();

            cout << cRed << "Enter the base length of triangle 2:\t";
            validateDouble(b);
            pt2.setBase(b);

            drawStatus();

            cout << cRed << "Enter the height of triangle 2:\t";
            validateDouble(h);
            pt2.setHeight(h);

            drawStatus();

            cout << cRed << "Are you sure about these measurements?\t";
            validateChar(decision);

          } while(decision != 'y' && decision != 'Y');

          count++;
        }
        else
        {
          do
          {
            drawStatus();

            cout << cGreen << "Enter the base length of triangle 3:\t";
            validateDouble(b);
            pt3.setBase(b);

            drawStatus();

            cout << cGreen << "Enter the height of triangle 3:\t";
            validateDouble(h);
            pt3.setHeight(h);

            drawStatus();

            cout << cGreen << "Are you sure about these measurements?\t";
            validateChar(decision);

          } while(decision != 'y' && decision != 'Y');

          count++;
        } 
      } while (count < 3);
    }
  };
#endif 