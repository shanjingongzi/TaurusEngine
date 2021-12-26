#include "Core.hpp"
#include <vector>
class Octree{
public:
    Octree();
    Octree(int x,int y,int z);
    Octree(int x1,int y1,int z1,int x2,int y2,int z2);
    void Insert(int x,int y,int z);
    bool Find(int x,int y,int z);
private:
    Point *center;
    Point *topLeftFront,*bottomRingBack;
    std::vector<Octree *>children; 
};

