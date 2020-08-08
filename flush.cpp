#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
int main()
{
	
	for (int i = 5; i>=0; i--)
	{
		cout<<"i ---> "<<i<<endl;
		//providing the time of 3 second
		this_thread::sleep_for(chrono::seconds(3));
	}
	return 0;
}