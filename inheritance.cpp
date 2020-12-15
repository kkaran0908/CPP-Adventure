/*
1. It is the core part of any object oriented programming language.

Terminology: Base/Derived, Parent/Child

Types of Inheritance:
1. Single:
        A derived class with only one base class is called single inheritance.
2. Multilevel:
		A derived class of base class and that base class is also a derived class of another class.
3. Multiple:
		A derived class from multiple base classes.
4. Heirarchical:
		Multiple derived class from same base classis called heirarchical inheritance.
5. Hybrid
   Combination of multiple and hierarchical inheritance is called hybrid inheritance.
6. Multipath
   A derived class with two base classes and these two base classes have one common base class is called multipath inheritance.

MODES OF INHERITANCE
1. public  (Visible to everyone)
2. protected (Visible to current class and derived class only)
3. private (Visible to current class only)


access rules: https://www.geeksforgeeks.org/inheritance-in-c/
*/


#include<iostream>
using namespace std;

class Base{
public:
	int x = 0;
	Base():x{0}{};

};

class Derived: public Base{
public:
	void print()
	{
		cout<<"Value of x access from Base class is : "<<x<<endl;
	}
};

int main()
{
	Derived d;
	d.print();
	return 0;
}