#include "AABB.h"

AABB::AABB(const Point &point,float dx,float dy,float dz):min(point)
{
    d[0]=dx;
    d[1]=dy;
    d[2]=dz;
}

int AABB::Test(const AABB &rhs)
{
    float t;
    int ret=1;
    for(int i=0;i<3;++i){
        t=this->min[i]-rhs.min[i];
        ret&=(t<d[i]||-t>d[i]);
    }
    return ret;
}