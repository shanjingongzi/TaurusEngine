#include "Vector.h"

Vector::Vector():glm::vec3(0.0f,0.0f,0.0f)
{
    this->x+=1；
    this->y+=1;
    this->z+=1;
}

Vector::~Vector()
{
}

