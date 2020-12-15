//these are constant data members, so once initialize, these members can not change their value.

//ways to initialize constant data members
//1. using initialize list.
//2. in the class level itself.

#include<iostream>
using namespace std;

class Circle{
//we generally keep data members in private section.
	const float pi = 3.14 ;
	float r;
  public:  
    Circle(float red):r(red){};

    float area()
    {
    	return (pi*r*r);
    }


};

int main()
{
	Circle c(5);
	float ar = c.area();
	cout<<"Area of the circle: "<<ar<<endl;

}