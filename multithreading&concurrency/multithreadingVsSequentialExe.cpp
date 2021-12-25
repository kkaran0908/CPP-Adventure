#include<iostream>
#include <pthread.h>
#include<thread>
using namespace std;
using namespace std::chrono;

int oddSum;
int evenSum;

void function1(int val)
{
	oddSum = 0;

	while(val>=0)  //iterate through all numbers from 100 to 0
	{
		if((val&1)==0) //check if number is divisible by 2 or not
		{
			oddSum = oddSum+val;
		}
		val--;
	}
}

void function2(int val)
{
	evenSum = 0;

	while(val>=0) //iterate through all numbers from 100 to 0
	{
		if((val&1)==1) //check if number is divisible by 2 or not
		{
			evenSum = evenSum+val;
		}
		val--;
	}
}

int main()
{
	//calling the function using multithreading
	cout<<"\n***********************************************************"<<endl;
	auto startTime1 = std::chrono::system_clock::now();
	std::thread t1(function1,100);
	std::thread t2(function2,100);

	t1.join();
	t2.join();
	
	cout<<"Sum of all even numbers from 1 to 100:\t"<<evenSum<<endl;
	cout<<"Sum of all odd numbers from 1 to 100:\t"<<oddSum<<endl;
	auto endTime1 = std::chrono::system_clock::now();

	auto duration1 = duration_cast<microseconds>(endTime1-startTime1);
	cout<<"Time taken using Multithreaded Execution:\t"<<duration1.count()<<endl;

	//calling the function using sequential execution

	cout<<"\n***********************************************************\n"<<endl;

	auto startTime2 = std::chrono::system_clock::now();
	function1(100);
	function2(100);

	cout<<"Sum of all even numbers from 1 to 100:\t"<<evenSum<<endl;
	cout<<"Sum of all odd numbers from 1 to 100:\t"<<oddSum<<endl;
	auto endTime2 = std::chrono::system_clock::now();

	auto duration2 = std::chrono::duration_cast<microseconds>(endTime2-startTime2);
	cout<<"Time taken using Sequential Execution:\t"<<duration2.count()<<endl; 

	return 0;
}