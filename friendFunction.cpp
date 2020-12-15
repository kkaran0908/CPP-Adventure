//friend function in c++14
/*
1. keyword friend is used to make some function/class as friend of your class.
2. Friend class/function can access private/public/protected data member or member function of another class.
3. Function can not become friend of another function.
4. CLass can not become the friend of function.
5. Friendship is not mutual i.e. if class A is friend to B, it does not mean that B is also the friend of A automatically.
6. Friendship is not inherited.

*/

#include<iostream>
using namespace std;
class Base{
	int x;
public:
	Base(){}  //default constructor
	Base(int a):x{a}{} //parameterized constructor

	friend void set(Base&,int); //decleared this function as friend function of class Base
	friend int get(Base&);  //decleared this function as friend function of class Base

	//friend class X (we can create these function get and set in this class and these functions can access the data member of Base class)

};
void set(Base& obj, int x)
{
	obj.x = x; //
}
int get(Base& obj)
{
	return obj.x;
}
int main()
{
	Base b;
	set(b,10);
	int val = get(b);
	cout<<"Getting value using friend function: "<<val<<endl;
	return 0;
}