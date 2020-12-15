/*
1. just like struct and class, union is also a user defined data type.
2. This is used to achieve polymorphism in C.
3. In union all members share the biggest same memory location.

Usage:
1. When we need only one value out of many that time we will use it.
2. Get the actual data in parts.
*/

#include<iostream>
using namespace std;
union myUnion{ //entire union will take only 4 bytes in memory becaue at a time we will use only one variable.
	int x;
	short y;
	char c; //All will point to the memory location of x, bcs it is biggest in size.
};

union Area{
	int height;
	int width;
};

int findArea(int height, int width)
{
return height*width;
}

int main()
{
	Area a;
	a.height = 10;
	a.width = 5; //value of height will also be 5 now, bcs both height and width are pointing to the same memory location.

	cout<<"Area for the given dimension: "<<findArea(a.height,a.width)<<endl;

}

