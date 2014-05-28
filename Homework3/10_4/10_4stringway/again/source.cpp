#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sort(string &s)
{
    // return (sort(text.begin(), text.end()));
    sort( s.begin(), s.end() ) ; // sort the text
    return s ; // return the sorted text
}

int main () {
	cout << "Enter a string s: " << endl;
	string s;
	cin >>s;
	cout << "The sorted string is " << sort(s) << endl;
	system ("pause");
	return 0;
}
