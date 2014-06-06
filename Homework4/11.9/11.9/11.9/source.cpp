#include "Rectangle2D.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
 //Rectangle 1
 Rectangle2D *r1 = new Rectangle2D(2, 2, 5.5, 4.9);
 cout << "r1 parameters are: x = " << (*r1).getX() << ", y = " << (*r1).getY() << ", Width = " << (*r1).getWidth()
  << ", Height = " << (*r1).getHeight() << endl;
 cout << "The perimeter of r1 is: " << (*r1).getPerimeter() << ". The area of r1 is: " << (*r1).getArea() << "." << endl << endl;
 //Rectangle 2
 Rectangle2D *r2 = new Rectangle2D(4, 5, 10.5, 3.2);
 cout << "r2 parameters are: x = " << (*r2).getX() << ", y = " << (*r2).getY() << ", Width = " << (*r2).getWidth()
  << ", Height = " << (*r2).getHeight() << endl;
 cout << "The perimeter of r2 is: " << (*r2).getPerimeter() << ". The area of r2 is: " << (*r2).getArea() << "." << endl << endl;
 //Rectangle 3
 Rectangle2D *r3 = new Rectangle2D(3, 5, 2.3, 5.4);
 cout << "r3 parameters are: x = " << (*r3).getX() << ", y = " << (*r3).getY() << ", Width = " << (*r3).getWidth()
  << ", Height = " << (*r3).getHeight() << endl;
 cout << "The perimeter of r3 is: " << (*r3).getPerimeter() << ". The area of r3 is: " << (*r3).getArea() << "." << endl << endl;
 //Tests the contains and overlap functions
 cout << "Does r1 contain (3, 3)? (0 = no, 1 = yes): " << (*r1).contains(3, 3) << endl << endl;
 cout << "Does r1 contain r2? (0 = no, 1 = yes): " << (*r1).contains(*r2) << endl << endl;
 cout << "Does r3 overlap r1? (0 = no, 1 = yes): " << (*r1).overlaps(*r3) << endl << endl;
 system("PAUSE");
 return 0;
}