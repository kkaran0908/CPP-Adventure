/*
1. It helps us in binding the data and function to each other.
2. Class is an example of encapsulation.
Note: if we have created some class and it has data member and some functions, it is an example of encapsulation.
*/

#include<iostream>
using namespace std;

class Base{
	int x;
public:
	void set(int a)
	{
		x = a;
	}
	int get()
	{
		return x;
	}

};
int main()
{
	Base b;
	b.set(10);
	cout<<"Getting data after setting : "<<b.get()<<endl;
	cout<<"Class is a really good example of encapsulation!!"<<endl;
	return 0;
}