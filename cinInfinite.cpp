//in this code we will take any number of integer input using CIN
#include<iostream>
using namespace std;
int main()
{
int count = 0;
int input;
cout<<"Enter the number :\t";
while(cin>>input)
	{
	count++;
	cout<<"Enter the number you want to enter:\t";
	}
cout<<"You have entered "<<count<<" integers!!!"; 
}