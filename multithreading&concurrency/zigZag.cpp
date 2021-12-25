#include<iostream>
#include<thread>
using namespace std;
std::mutex m1,m2;

void function1(int x)
{
	m2.lock();

	for(int v=0; v<x; v++)
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		m1.lock();
		cout<<"function1: "<<v<<endl;
		m2.unlock();
	}
	
}

void function2(int x)
{
	
	for(int v=0; v<x; v++)
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		m2.lock();
		cout<<"function2: "<<v<<endl;
		m1.unlock();
	}
	
}

int main()
{
	std::thread t1(function1, 10);
	std::thread t2(function2, 10);

	t1.join();
	t2.join();
	return 0;
}