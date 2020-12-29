#include<iostream>

int function()
	{
		std::cout<<"We are calling it before main!!"<<std::endl;
		return 5;
	}

class Base{
public:
	static int variable;

};
int Base::variable = function(); // function will get called 

int main()
{
	std::cout<<"Inside main!!!"<<std::endl; // it will get printed at the end.
	return 0;
}