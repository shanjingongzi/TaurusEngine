#include "Plane.h"

Plane::Plane(Point a,Point b,Point c)
{
   n=Cross(a-c,b-c);
   d=Dot(a-c,n);
}