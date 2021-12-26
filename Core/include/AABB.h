#include "Core.hpp"
class AABB{
	public:
		AABB(const Point &point,float dx,float dy,float dz);
		int Test(const AABB &rhs);
	private:
		Point min;
		float d[3];
};
