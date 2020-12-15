/*

1. Data hiding is about data member in the class, we keep data members as private and this is considered as data hiding.
2. it is not about hacking nd all, it is about correctness of the data and preventing it from accidental manipulations.
*/

#include<iostream>
using namespace std;
class Volume{
	int vol;
public:
	Volume():vol{0}{};

	void setVolume(int lvl)
	{
		if (lvl>=0 && lvl<=100)
		{
			vol = lvl;
			cout<<"Volume set at : "<<vol<<endl;
		}
		else
		{
			cout<<"Default volume is previous volume i.e. : "<<vol<<endl;
		}
	}


};
int main()
{
	Volume V;
	V.setVolume(150);
	V.setVolume(10);
	return 0;
}