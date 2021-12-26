#include "Sphere.h"

Sphere::Sphere(const Point &point,float r):center(point),radius(r)
{
}

Sphere::~Sphere()
{
}

int Sphere::Test(const Sphere&rhs)
{
	Vector d=this->center-rhs.center;
	float dist2=Dot(d,d);
	float radiusSum=this->radius+rhs.radius;
	int ret=dist2<radiusSum*radiusSum;
	return ret;
}

