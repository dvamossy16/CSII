#include <iostream>
#include <string>

using namespace std;

class EvenNumber {

public:
	int value;

	EvenNumber ()
	{
		value = 0;
	}
	EvenNumber (int i)
	{
		i = 2*value;
	}

	int getValue ()
	{
		return value;
	}
	int getNext ()
	{
		return value+2;
	}
	int getPrevious ()
	{
		return value-2;
	}
	void setValue (int value)
	{
		this->value = value;
	}
};
int main ()
{
	EvenNumber even16;
	even16.setValue(16);
	
	cout << "The value of the number is " <<even16.getValue() << endl;
	cout << "The next even number is: " << even16.getNext() << endl;
	cout << "The previous even number is: " << even16.getPrevious() << endl;
	system ("pause");
	return 0;
}
