/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  9 APRIL 2020
  IDE: Repl.it 
  Program:  Triangle Area Calculator QUIZ 3
  https://repl.it/@ChetLockwood/TriangleClassLockwood
*/
#include "Status.h"
#include "Triangle.h"

//Global classes (cuts down on uneccessary code expansion for scope of program)
//Triangle t1, t2, t3;

//void drawStatus(Triangle &, Triangle &, Triangle &);
//void menu(Triangle &);

//Main Function *********************************************************************
int main() 
{
  Triangle t1, t2, t3;

  Status s;

  s.setT1(t1);
  s.setT2(t2);
  s.setT3(t3);

  s.menu(s);
  s.menu(s);
  s.menu(s);

  s.drawStatus();
  
  return 0;
}
//Function Defintions ****************************************************************

/*void drawStatus(Triangle &t1, Triangle &t2, Triangle &t3)
{
  cout << cClear << cReset << cUnderL << "Area of a Triangle - (bh/2)\n\n";

  cout << cReset << cBlue << "Triangle 1 Base: " << t1.getBase() << "\n";
  cout << "Triangle 1 Height: " << t1.getHeight() << "\n";
  cout << "Triangle 1 Area: " << t1.getArea() << "\n";

  cout << cRed << "Triangle 2 Base: " << t2.getBase() << "\n";
  cout << "Triangle 2 Height: " << t2.getHeight() << "\n";
  cout << "Triangle 2 Area: " << t2.getArea() << "\n";

  cout << cGreen << "Triangle 3 Base: " << t3.getBase() << "\n";
  cout << "Triangle 3 Height: " << t3.getHeight() << "\n";
  cout << "Triangle 3 Area: " << t3.getArea() << "\n\n\n\n";
}*/
/*
void menu(Triangle &t)
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
    drawStatus(t1, t2, t3);

    cout << cColor << "Enter the base length of " << triangle;
    validateDouble(b);
    t.setBase(b);

    drawStatus(t1, t2, t3);

    cout << cColor << "Enter the height of"  << triangle;
    validateDouble(h);
    t.setHeight(h);

    drawStatus(t1, t2, t3);

    cout << cColor << "Are you sure about these measurements?\t";
    validateChar(decision);

  }while(decision != 'y' && decision != 'Y');

  count++;
}*/