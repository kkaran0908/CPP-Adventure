/* it is very impportant concept of OOPs
1. There are two types of polymorphism:
    1.1 Compile time polymorphism.
    	a. Using function overloading.
    	b. Operator overloading.
    1.2 Run time polymorphism
    	a. Function overiding using virtual functions.

1. We can not achieve polymorphism by changing the return type of the function.

*/

#include<iostream>
using namespace std;

class Base{

public:
	void fun1(int x)
	{
		cout<<"This is for intergers!"<<endl;
	}
	void fun1(double x )
	{
		cout<<"This is for double"<<endl;
	}

};

int main()
{
	Base b;
	b.fun1(10);
	b.fun1(10.5);
	return 0;
}