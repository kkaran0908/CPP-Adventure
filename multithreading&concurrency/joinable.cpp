#include<iostream>
#include<thread>
using namespace std;

void function1()
{
	cout<<"This is function1 called by thread1"<<endl;
}

void function2()
{
	cout<<"This is function2 called by thread2"<<endl;
}
int main()
{
	std::thread t1(function1);
	std::thread t2(function2);

	t1.join();

	if(t1.joinable())
	{
		cout<<"Joining the Thread t1"<<endl;
		t1.join();
	}
	if(t2.joinable())
	{
		cout<<"Joining the Thread t2"<<endl;
		t2.join();
	}

	return 0;

}


