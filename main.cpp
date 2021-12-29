#include <iostream>
#include "./Core/include/Core.hpp"
#include "./Core/include/Sphere.h"
#include "boost/thread/thread.hpp"
using namespace std;

int main()
{
    Vector vec1(1.0f,0.0f,0.0f);
    Vector vec2(0.0f,1.0f,0.0f);
    float dist=Dot(vec1,vec2);
    Vector vec3=Cross(vec1,vec2);
    cout<<"hello TaurusEigen"<<endl;
    boost::thread t([](){return 1;});
    t.join();
}
