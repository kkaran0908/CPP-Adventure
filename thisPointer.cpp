//this pointer in cpp
/*
1. this pointer is used to hold the address of current object.(using which we have called particular member function).
2. this pointer is a const pointer
3. this pointer is passed as a hidden argument to the non-static member functions.
4. it is not passed in static member functions.
5. Compiler automatically changes all data member access with this pointer.
*/

#include<iostream>
using namespace std;
class Base{
	int x;
public:
	Base() {}; //default constructor.
	Base(int a): x{a}{}; //parameterized constructor.

	int getVal()
	{
		return this->x; //x should be non-static data member only.
	}
	void setVal(int a)
	{
      this->x = a; //x should be non-static data member only.

	}



};

int main()
{
	Base b1;
	Base b2(20);
	//b2.setVal(30);
    cout<<"Set value : "<<b2.getVal()<<endl;
	return 0;
}