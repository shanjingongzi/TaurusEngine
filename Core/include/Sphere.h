#include "Core.hpp"

class Sphere
{
	public:
		Sphere(const Point &center,float radius);
		~Sphere();
		int Test(const Sphere &rhs);
	private:
		Point center;
		float radius;
};
