#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

int main(){
 Complex c1, c2;
 cout << "Enter the first complex number: ";
 cin >> c1;
 cout << "Enter the second complex number: ";
 cin >> c2;

 Complex res = c1 + c2;
 cout << "(" << c1 << ") + (" << c2 << ") = " << res << endl;

 res = c1 - c2;
 cout << "(" << c1 << ") - (" << c2 << ") = " << res << endl;

 res = c1 * c2;
 cout << "(" << c1 << ") * (" << c2 << ") = " << res << endl;

 res = c1 / c2;
 cout << "(" << c1 << ") / (" << c2 << ") = " << res << endl;

 double a = c1.abs();
 cout << "|" << c1 << "|" << " = " << a << endl;

 return 0;
}
