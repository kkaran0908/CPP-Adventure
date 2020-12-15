#include<iostream>
#include<string>
using namespace std;
class Phone{
	string p_name;
	string p_size;
public:
    Phone(string name,string size)
    {
    	p_name = name;
    	p_size = size;
    }
	void makeCall()
	{
		cout<<"Making calls using : "<<p_name<<endl;
	}
	void receiveCall()
	{
		cout<<"Receiving calls using :"<<p_size<<" phone"<<endl;
	}


};
int main()
{
	Phone p("iPhone SE","4 Inches");
	p.makeCall();
	p.receiveCall();
	cout<<endl;

	Phone googlePixel("Google Pixel X", "6.5 Inches");
	googlePixel.makeCall();
	googlePixel.receiveCall();
	return 0;
}