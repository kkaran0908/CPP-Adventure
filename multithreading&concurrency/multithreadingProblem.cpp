#include<iostream>
#include<thread>
using namespace std;

int x = 0;

std::mutex m;

void function1()
{
	//acquire the lock
	m.lock();

	//critical section code
	x = 2;
	x = x+1;

	//release the lock
	m.unlock();

}

int main()
{

	std::thread t1(function1);
	std::thread t2(function1);
	
	if(t1.joinable())
	{
		t1.join();
	}

	if(t2.joinable())
	{
		t2.join();
	}

	cout<<"Values of x:\t"<<x<<endl;

	return 0;

}
