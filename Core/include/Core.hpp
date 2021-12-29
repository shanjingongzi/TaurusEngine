#ifndef CORE_H
#define CORE_H
#include "glm/glm.hpp"

using Vector=glm::vec3;
using Point=glm::vec3;

inline float Dot(const Vector&vec1,const Vector&vec2)
{
    return glm::dot(vec1,vec2);
}

inline Vector Cross(const Vector&vec1,const Vector&vec2)
{
    return glm::cross(vec1,vec2);
}
#endif