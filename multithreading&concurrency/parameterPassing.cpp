
#include<iostream>
#include<thread>
using namespace std;

int multi;
int sum;

void function1(int x, int y)
{
	sum = x+y;
}

void function2(int x, int y)
{
	multi = x*y;
}

int main()
{
	int a = 10, b = 20;

	std::thread t1(function1,a,b);
	std::thread t2(function2,a,b);

	t1.join();
	t2.join();

	cout<<"Sum of given numbers: "<<sum<<endl;
	cout<<"Multiplication of given numbers: "<<multi<<endl;

	return 0;

}


