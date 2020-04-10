/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  9 APRIL 2020
  IDE: Repl.it 
  Program:  Triangle Area Calculator QUIZ 3
  https://repl.it/@ChetLockwood/TriangleClassLockwood
*/

#include <string>
#include "Triangle.h"

void drawStatus(Triangle &, Triangle &, Triangle &);
void menu(Triangle &);

//Main Function *********************************************************************
int main() 
{
  Triangle t1, t2, t3;
  
  menu(t1);
  menu(t2);
  menu(t3);
/*
  do
  {
    drawStatus(t1, t2, t3);

    cout << cBlue << "Enter the base length of triangle 1: \t";
    validateDouble(b);
    t1.setBase(b);

    drawStatus(t1, t2, t3);

    cout << cBlue << "Enter the height of triangle 1: \t";
    validateDouble(h);
    t1.setHeight(h);

    drawStatus(t1, t2, t3);

    cout << cBlue << "Are you sure about these measurements?\t";
    validateChar(decision);

  }while(decision != 'y' && decision != 'Y');

  do
  {
    drawStatus(t1, t2, t3);

    cout << cRed << "Enter the base length of triangle 2: \t";
    validateDouble(b);
    t2.setBase(b);

    drawStatus(t1, t2, t3);

    cout << cRed << "Enter the height of triangle 2: \t";
    validateDouble(h);
    t2.setHeight(h);

    drawStatus(t1, t2, t3);

    cout << cRed << "Are you sure about these measurements?\t";
    validateChar(decision);

  }while(decision != 'y' && decision != 'Y');

  do
  {
    drawStatus(t1, t2, t3);

    cout << "Enter the base length of triangle 1: \t";
    validateDouble(b);
    t3.setBase(b);

    drawStatus(t1, t2, t3);

    cout << "Enter the height of triangle 1: \t";
    validateDouble(h);
    t3.setHeight(h);

    drawStatus(t1, t2, t3);

    cout << "Are you sure about these measurements?\t";
    validateChar(decision);

  }while(decision != 'y' && decision != 'Y');
*/
  drawStatus(t1, t2, t3);
  
  return 0;
}
//Function Defintions ****************************************************************

void drawStatus(Triangle &t1, Triangle &t2, Triangle &t3)
{
  cout << cClear << cReset << cUnderL << "Areat of a Triangle (bh/2)\n";

  cout << cReset << cBlue << "Triangle 1 Base: " << t1.getBase() << "\n";
  cout << "Triangle 1 Height: " << t1.getHeight() << "\n";
  cout << "Triangle 1 Area: " << t1.getArea() << "\n";

  cout << cRed << "Triangle 2 Base: " << t2.getBase() << "\n";
  cout << "Triangle 2 Height: " << t2.getHeight() << "\n";
  cout << "Triangle 2 Area: " << t2.getArea() << "\n";

  cout << cGreen << "Triangle 3 Base: " << t3.getBase() << "\n";
  cout << "Triangle 3 Height: " << t3.getHeight() << "\n";
  cout << "Triangle 3 Area: " << t3.getArea() << "\n\n\n\n";
}

void menu(Triangle &t)
{
  Triangle t1, t2, t3;
  double b = 0, h = 0;
  char decision = '\0';

  do
  {
    drawStatus(t1, t2, t3);

    cout << cBlue << "Enter the base length of triangle 1: \t";
    validateDouble(b);
    t.setBase(b);

    drawStatus(t1, t2, t3);

    cout << cBlue << "Enter the height of triangle 1: \t";
    validateDouble(h);
    t.setHeight(h);

    drawStatus(t1, t2, t3);

    cout << cBlue << "Are you sure about these measurements?\t";
    validateChar(decision);

  }while(decision != 'y' && decision != 'Y');
}