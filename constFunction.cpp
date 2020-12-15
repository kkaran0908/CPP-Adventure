//It is used to restrict the modification of data members

#include<iostream>
using namespace std;

class Base{
	int x;
public:

	Base() {};
	Base(int a): x{a}{};
	void set(int a)
	{
		x = a;
	}
	int get() const{
		//x = 30; //this line should generate an error bcs const function can not change the value of data members
		return x;
	}

};

int main()
{

	Base b;
	b.set(20);
	cout<<"Getting value from constant function: "<<b.get()<<endl;
	cout<<"Const function can not change the value of data members!"<<endl;
	return 0;

}