#include<iostream>
using namespace std;
/*class Test
{
	int val =0;
public:
	Test (int val = 0):val{val}{};
	//either we can overload using reference or pointers
	void function(int& x)
	{
		cout<<"Trying to Implement Function Overloading, Value: "<<x<<endl;
	}
	void function(const int& x)
	{
		cout<<"Trying to implement function over loading, Value: "<< x <<endl;
	}
};
int main()
{
	cout<<"Function overloading using reference"<<endl;
	Test t;
	int k = 100;
	const int p = 200;
	t.function(k);
	t.function(p);
	return 0;

}*/

class Test
{
	int val =0;
public:
	Test (int val = 0):val{val}{};
	//either we can overload using reference or pointers
	void function(int* x)
	{
		cout<<"Trying to Implement Function Overloading, Value: "<<*x<<endl;
	}
	void function(const int* x)
	{
		cout<<"Trying to implement function over loading, Value: "<< *x <<endl;
	}
};
int main()
{
	Test t;
	int k = 100;
	const int p = 200;
	cout<<"Function overloading using pointers!!"<<endl;
	t.function(&k);
	t.function(&p);
	return 0;

}