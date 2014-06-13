#include <iostream>
#include "Complex.h"
using namespace std;

int main(){
 cout << "Enter Real and imaginary parts of z1 followed by space" << endl;
 double r1,i1,r2,i2;
 cin >> r1 >> i1;
 Complex a(r1,i1);
 cout << "Do you want to print it? Y for yes, N for No. "; char asd; cin >> asd;
 if (asd == 'Y'){
  a.print();
 }
 cout << "Enter Real and imaginary parts of z2 followed by space" << endl;
 cin >> r2 >> i2;
 Complex b(r2,i2),c(a.add(b));
 cout << "Do you want to print it? Y for yes, N for No. "; cin >> asd;
 if (asd == 'Y'){
  b.print();
 }
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
 return 0;
}
