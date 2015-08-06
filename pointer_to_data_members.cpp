#include <iostream>
//#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Point3d {
public:
	Point3d()
	{
		x = 1;
		y = 2;
		z = 3;
	};
	virtual ~Point3d(){};
	void get_pointer()
	{
		printf("&Point3d::x = %p\n", &Point3d::x);
		printf("&Point3d::y = %p\n", &Point3d::y);
		printf("&Point3d::z = %p\n", &Point3d::z);
		//printf("&Point3d::z = %d\n", &origin.z);
	}
protected:
	static Point3d origin;
	float x, y, z;
};

int main()
{
	Point3d p3d;
	p3d.get_pointer();

	return 0;
}
