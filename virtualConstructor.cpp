#include<iostream>
using namespace std;

class Base{
public:
	virtual void fun()
	{
		cout<<"This is Base class function!!"<<endl;
	}

	virtual ~Base()
	{
		cout<<"This is base class destructor!!"<<endl;
	}
};

class Derived : public Base{
public:
	void fun()
	{
		cout<<"This is derived class function!!"<<endl;
	}
	~Derived()
	{
		cout<<"This is derived class destructor!!"<<endl;
	}
};
int main()
{
	Base *b1 = new Base();
	Base *b2 = new Derived();
	b1->fun();
	b2->fun();

	delete b1; //it will call base class destructor becase b1 points to the base class
	delete b2; //it will call the derived class destructor because base class constructor is virtual, if it would not have been virtual, it will call base class destructor itself.
	return 0;
}