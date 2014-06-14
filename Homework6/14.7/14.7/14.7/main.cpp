#include <iostream>
#include "Complex.h"
using namespace std;

int main(){
 cout << "Enter the first complex number" << endl;
 double r1,i1,r2,i2;
 cin >> r1 >> i1;
 Complex a(r1,i1);
  cout << "Enter the second complex number" << endl;
 cin >> r2 >> i2;
 Complex b(r2,i2),c(a.add(b));
  cout << "\nSUM: \t\t(" << c.getReal() << ") + (" << c.getImag() << ")i" << endl;
 
 reset(r1,i1,a,c);
 c = a.sub(b);
 cout << "Difference: \t(" << c.getReal() << ") + (" << c.getImag() << ")i" << endl;

 reset(r1,i1,a,c);
 c = a.mult(b);
 cout << "Product: \t(" << c.getReal() << ") + (" << c.getImag() << ")i" << endl;

 reset(r1,i1,a,c);
 c = a.div(b);
 cout << "Division: \t(" << c.getReal() << ") + (" << c.getImag() << ")i" << endl;

 reset(r1,i1,a,c);
 c = a.abs(b);
 cout << "Absolute: \t(" << c.getReal() << ") + (" << c.getImag() << ")i" << endl;
 return 0;
}
