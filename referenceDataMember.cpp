//use when you are okay with your data member can be changed without your knowledge.
//use when you dont need to impliment assignment operator in your class.
//you need to ensure that the reffered objects are guranteed to exis till your class object exist.

#include<iostream>
using namespace std;

class Base{
	int& a;

public:
	Base(int& x): a{x}{};

	void printa()
	{
		cout<<"Value in a : "<<a<<endl;
	}


};
int main()
{
	int val = 10;
	Base b(val);
	b.printa();
	val = 30;
	b.printa();
	return 0;
}