#include<iostream>
using namespace std;
class Base1
{
	int x; //it is by default private.
};

struct Base2{
	int y; //it is by default public.
};

int main()
{
	Base1 b1;
	Base2 b2;
	b2.y = 10;
	//b1.x = 20;//it will generate an error bcs we are trying to access the private member of the class

	cout<<"Value of Y in struct : "<<b2.y<<endl;
}