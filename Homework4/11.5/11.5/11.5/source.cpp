#include <iostream>

using namespace std;
int smallest(int a[], int n);

int main () {
	int x[]={1,2,4,5,10,100,2,-22};
	cout << "The smallest number in the array is " << smallest (x,8) << endl;
	system ("pause");
	return 0;
}



int smallest(int a[], int n)
{
   static int *min;

   if (min == 0)
      min = new int(a[n - 1]);
   else if (*min > a[n - 1])
      *min = a[n - 1];
   if (n == 1)
      return *min;
   else
      return smallest(a, n - 1);
}