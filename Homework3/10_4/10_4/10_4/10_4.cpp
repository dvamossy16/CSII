#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int string_length(char str[]);
string sort(string& s);

int main()
{
	string s = {'b','z','w','q','d','t','c','u','f','s','o','x','a','e','v','z','l','r','I','g'};
	cout << "Enter a string s: ";
	string s1;
	cin >> s1;
	//cout << "Original: " << s1 << endl;
	string sort(s1);
	cout << "The sorted string is: \n"<< s1 << endl;
	system ("pause");
	return 0;
}//main
void string_sort(string s)
{
	char tmp;
	string s1;
	int i, j;
	k = s1.length();
	for(i=0; i<k-1; i++)
	{
		for (j=i+1; j<k; j++)
		{
			if (s[i] > s[j])
			{
				tmp=s[i];
				s[i]=s[j];
				s[j]=tmp;
			}
		}
	}
}


