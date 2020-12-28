#include<iostream>
using namespace std;
int main()
{
	int *p = new int(10);
	void *x = p; //it will work fine.
	//cout<<*x<<endl; // this line will generate an error, as we can not dereference the void pointer
	cout<<"Value of the Integer is: "<<*( static_cast <int*> (x) )<<endl; //it will work fine, as we are typecasting void pointer to integer pointer

	//malloc always returns the void pointer, so thats why we always typecast it

}