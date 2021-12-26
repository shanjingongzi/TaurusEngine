#include "Octree.h"


Octree::Octree()
{
    center=new Point(-1.0f,-1.0f,-1.0f);
}

Octree::Octree(int x,int y,int z)
{
    center=new Point(x,y,z);
}

Octree::Octree(int x1,int y1,int z1,int x2,int y2,int z2)
{
   int isCreate=x1<x2&&y1<y2&&z1<z2;
   if(!isCreate){
       return;
   } 
   center=nullptr;
   topLeftFront=new Point(x1,y1,z1);
   bottomRingBack=new Point(x2,y2,z2);
   children.assign(8,nullptr);
   //TODO 
   
}

void Octree::Insert(int x,int y,int z)
{
    if(Find(x,y,z)){
        return;
    }
    int ret=1;
    ret=ret&x>topLeftFront->x&x<bottomRingBack->x&y>topLeftFront->y&y<topLeftFront->y&z<topLeftFront->z&z>bottomRingBack->z;
    if(!ret){
        return;
    }

}
