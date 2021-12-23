#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector vec;
    vec.x=1;
    vec.y=1;
    vec.z=1;
    float d=glm::dot(vec,glm::vec3());
    cout<<"Hello Taurus Engine"<<endl;
}
