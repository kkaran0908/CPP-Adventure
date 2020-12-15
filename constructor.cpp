//constructor
//automatically get called when we create the object of the class
//it does not have any kind of return type
//type:
//1. default constructor
//2. parameterized constructor
//3. copy constructor
#include<iostream>
using namespace std;
class Test{
	int x;
	int y;
public:
	Test()
	{
		x = 0;
		y = 0;
		cout<<"Default constructor called!"<<endl;
	}
	Test(int val1,int val2)
	{
		x = val1;
		y = val2;
		cout<<"parameterized constructor called!"<<endl;
	}
	Test(const Test& rhs)
	{
		x = rhs.x;
		y = rhs.y;
		cout<<"Copy constructor called"<<endl;
	}
};

int main()
{
	Test t;
	Test t1(5,6);
	Test t2 = t;

}