#include<iostream>
using namespace std;
class Website{

private:
protected:
public:
	string uName;
	void printUserName(string uName)
	{
		(*this).uName = uName;
		cout<<"Username is : "<<uName<<endl;
	}
};



class Facebook: public Website{

public:
	string fb_password;
	void secret()
	{
		//cout<<"User Name : "<<uName<<endl;
		cout<<"Password: "<<fb_password<<endl;

	}
public:
	Facebook(string password)
	{
		fb_password = password;

	}

};

int main()
{
	Website w;
	w.printUserName("Rajendra Kumar Rajput"); //accessing the public member of its own class;
	//w.secret(); //at this line we will get an error because website has no secret method,

	Facebook f("TradingTechnologies.com"); //this is the derived class, so it can access the public member of it's base class
	f.printUserName("Karan Kumar Rajput");
	f.secret();
}