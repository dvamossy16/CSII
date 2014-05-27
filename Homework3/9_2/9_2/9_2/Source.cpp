#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Fan {
	
private:
	int speed;
	bool on;
	double radius;
	
public:
	Fan () 	{
		speed = 1;
		on = false;
		radius = 5;
			}
	int getSpeed ()
	{
		return speed;
	}
	void setSpeed (int speed)
	{
		this->speed = speed;
	}
	bool isOn()
	{
		return on;
	}
	void setOn(bool trueOrFalse)
	{
		this->on = trueOrFalse;
	}
	double getRadius ()
	{
		return radius;
	}
	void setRadius (double radius)
	{
		this->radius = radius;
	}

};
int main ()
{
	cout << "The first fan properties: " << endl;
	Fan fan1;
	fan1.setSpeed(3);
	fan1.setRadius(10);
	fan1.setOn(true);

	cout << "Fan speed: " <<fan1.getSpeed() << endl;
	cout << "Fan radius: " << fan1.getRadius() << endl;
	cout << "Fan on? " << fan1.isOn() << endl;
	
	Fan fan2;
	fan2.setSpeed(2);
	fan2.setRadius(5);
	fan2.setOn(false);

	cout << "The second fan properties: " << endl;
	cout << "Fan speed: " <<fan2.getSpeed() << endl;
	cout << "Fan radius: " << fan2.getRadius() << endl;
	cout << "Fan on? " << fan2.isOn() << endl;

	cout <<"Continue?" << endl;
	int j;
	cin >>j;

	return 0;
}
