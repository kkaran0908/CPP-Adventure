#include<algorithm>
#include<iostream>
#include<vector>

class Car{
	int position;
	int tmp;

	std::vector<class observer*> obsList;
	std::vector<class observer*> tmpList;
public:
	int getPosition()
	{
		return position;
	}
	void setPosition(int pos)
	{
		position = pos;
		notify();
	}
	void notify()

};

class observer{
	Car *_car;
	observer(*car)
	{
		_car = car;
		_car->attach(this);
	}

	Car* getCar()
	{
		return _car;
	}

};


int main()
{
	return 0;
}