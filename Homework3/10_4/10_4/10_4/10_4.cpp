#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int string_length(char str[]);
void string_sort(char s[]);

int main()
{
	int i = 0;
	const int arraySize = 20;	
	char characters[arraySize] = {'b','z','w','q','d','t','c','u','f','s','o','x','a','e','v','z','l','r','I','g'};
	char s1[80];
	int length;
	cout << "Please input a string: ";
	cin >> s1;
	cout << "Original: " << s1 << endl;
	string_sort(s1);
	cout << "Sorted: \n"<< s1 << endl;
	system ("pause");
	return 0;
}//main
void string_sort(char s[])
{
	char tmp;
	int i, j, length;
	length=string_length(s);
	for(i=0; i<length-1; i++)
	{
		for (j=i+1; j<length; j++)
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


int string_length(char str[])
{
	int i;
	for(i=0; i<80; i++)
	{
		if(str[i]=='\0')
		{
			return(i);
		}
	}
}
