#include<iostream>
using namespace std;
class Game{

	static Game* instance;
public:    //if we do not make them public, we can not access them outside the class
	int _width;
private:
	int _height;
	string _color;

public:
	Game(): _width(5),_height(10),_color("Green"){}

public:
	static Game* getInstance() //this function will return the instance of the object 
	{
		if(instance ==NULL)
		{
			instance = new Game();
		}
		return instance;
	}
	void setWidth(int width)
	{
		(_width) = width;
	}
	void setHeight(int height)
	{
		(_height) = height;
	}
	void setColor(string color)
	{
		(_color) = color;
	}

	void displayProperties()
	{
		cout<<"Color of the car is : "<<_color<<endl;
		cout<<"Height of the car is : "<<_height<<endl;
		cout<<"Width of the car is : "<<_width<<endl<<endl;
	}
};

Game* Game::instance = NULL; //as instance is static so we need to declare it outside the class

int main()
{
	Game* obj = Game::getInstance();
	cout<<"Default Width : "<<obj->_width<<endl<<endl;;
	//cout<<"Default Height : "<<obj->_height<<endl;//this line will generate an error becaue we are trying to access the private member of the class.
	obj->setWidth(10);  //if we comment out all these three lines it will simply print the default value of all these parameters.
	obj->setHeight(20);
	obj->setColor("Black");
	obj->displayProperties(); //displaying all the properties, set by the user.
	return 0;
}