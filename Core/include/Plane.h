#ifndef PLANE_H
#define PLANE_H
#include "Core.hpp"
class Plane
{
    public:
        Plane(Point a,Point b,Point c);
    private:
        Vector n;//法线
        float d;//为平面上任意一点投影到法线上的距离
};
#endif