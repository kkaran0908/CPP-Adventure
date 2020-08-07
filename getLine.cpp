#include<iostream>
using namespace std;
int main()
{
	int n;
	string stt;
	cout<< "How many string you want to enter:\t";
	cin>>n;

	while(n--)
	{

		cout<<"Enter the string :\t";
		getline(cin,stt);
		
		//to check if there is any space after the string
		while(stt.length()==0)
		{
			getline(cin,stt);

		}
		//print the entered string
		cout<<"Entered String is: "<<stt<<endl;
	}
	return 0;
}