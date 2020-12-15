#include<iostream>
using namespace std;
class Base
{
public:
	virtual void fun() //if this function is not available in the derive class, the compiler at run time will call this function. To achieve runtime polymorphism, it is compulsory to add virtual function.
	{
		cout<<"Inside Base Class"<<endl;
	}
};

class Derive: public Base{
public:
	void fun()   //if this function is not available, it will call fun function of Base class.
	{
		cout<<"Inside Derive Class!"<<endl;
	}
};
int main()
{
	Base *b = new Derive();
	b->fun();   //At runtime, it will if the fun function is available in the derive class, if it is not available, it will call the function present in the Base class
	return 0;
}