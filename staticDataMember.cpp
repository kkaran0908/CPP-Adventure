#include<iostream>
using namespace std;
class Test{
public:
	int x;        //normal data members are the attributes of the object
	static int y; //static data members are the attributes of the class
	void printx()  //non static functions can access both static as well as non-static data members.
	{
		cout<<"Value of X: "<<x<<endl;
	}
	static void printy() //static data member can be accessed by only static method
	{
		cout<<"Value of Y: "<<y<<endl;  
	}
};

int Test::y;

int main()
{
	Test t1;
	Test t2;

	t1.x = 20;
	t2.x = 30;
	t1.y = 10;
	//Test::y = 10; we can initialize y like this as well bcs it belongs to class rather than object.
	t2.y = 40; //final value will be 40 in both the objects because both the opbject are pointing to the same memory location.
	cout<<"X (in object1)  : "<<t1.x<<endl;
	cout<<"X (in object 2) : "<<t2.x<<endl;
	cout<<"Y (in object1)  : "<<t1.y<<endl;//value of y in both the object will be same bcs both the object point to the same memory location.
	cout<<"Y (in object2)  : "<<t2.y<<endl;

	t1.printx();
	t1.printy();

	t2.printx();
	Test::printy();//we can also access the static member using scope resolution 
}