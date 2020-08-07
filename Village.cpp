#include<iostream>
using namespace std;
class Village
{
public:
	string name;
	int count;
	//this function will take the input from the user
	void getData()
	{
		cout<<"Enter the name of the Village:"<<endl;
		cin >> name;
		cout<<"Number of people in the village:"<<endl;
		cin>>count;

	}
	//this function will print the input given by the user
	void printData()
	{
		cout<<"Name of the village is : \t"<<name<<endl;
		cout<<"Number of people in the village are:\t"<<count<<endl;
	}
};
	int main()
	{   
		//creating the object of the class Village
		Village vlg;
		//calling the getData funtion of class Village using its object
		vlg.getData();
		//calling the printData() funtion of the class village using its object
		vlg.printData();
		return 0;

	}