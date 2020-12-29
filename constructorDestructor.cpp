#include<iostream>
using namespace std;

class Base{
public:
	Base(){
		cout<<"This is the constructor"<<endl;
	}
	~Base(){
		cout<<"This is the Destructor"<<endl;
	}
};

int main()
{

	Base *b = new Base(); //constructor will get called.
	delete b; //destructor will get called.

	char *memory = new char [(10*sizeof(Base))]; //it is creating the memory equal to the size of Base class
	Base *b1 = new (&memory[0]) Base();

	b1->~Base();
    delete b1;
	return 0;
}