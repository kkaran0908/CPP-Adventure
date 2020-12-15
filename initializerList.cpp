//This is used to initialize the class data members.
//1. using ()
//2. using {}
#include<iostream>
using namespace std;
class Base
{
	int x;
public:
	Base(int val):x{val}{};
	void print()
	{
		cout<<"Data in the constructor: "<<x;
	}
};

int main()
{
	Base b(10);
	b.print();

	return 0;
}