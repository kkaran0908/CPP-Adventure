//has-a or is-a relationship
#include<iostream>
using namespace std;
class Vehical{
public:
	string color;
	int tyre;

	Vehical(): color{"Black"},tyre{4}{};
	Vehical(string color1, int tyre1)
	{ 
		color = color1;
		tyre = tyre1;
	}
	void printSpec()
	{
		cout<<"Number of tyres in the car: "<<tyre<<endl;
		cout<<"Color of the car : "<<color<<endl;

	}
};

class Car: public Vehical{

public:
	Car(string color1, int tyre1)
	{ 
		color = color1;
		tyre = tyre1;
	}

	void printSpec()
	{
		cout<<"Number of tyres in the car: "<<tyre<<endl;
		cout<<"Color of the car : "<<color<<endl;

	}

};

int main()
{
	Vehical V("Green", 6);
	Car c("Green",7);
	c.printSpec();
	V.printSpec();
	return 0;
}
