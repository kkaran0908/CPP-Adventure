
#include<iostream>
#include<thread>
using namespace std;


int x;
void function1()
{
	x = 3;
	x = x + 1;
	x = x + 2;
}

int main()
{

	std::thread t1(function1);
	std::thread t2(function1);

	t1.join();
	t2.join();

	cout<<"Value of x: "<<x<<endl;

	return 0;

}


