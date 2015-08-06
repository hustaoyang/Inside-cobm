#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class Point3d {
public:
	Point3d()
	{
		x = 1;
		y = 2;
		z = 3;
	};
	Point3d normalize() const;
	virtual ~Point3d(){};
protected:
	static Point3d origin;
	float x, y, z;

private:
	float magnitude() const ;
};

float Point3d::magnitude() const
{
	return sqrt(x * x + y * y + z * z);
}

Point3d Point3d::normalize() const
{
	register float mag = magnitude();

	Point3d normal;
	
	normal.x = x/mag;
	normal.y = y/mag;
	normal.z = z/mag;

	return normal;
}


int main()
{
	Point3d p3d;
	Point3d *ptr = &p3d;

	return 0;
}
