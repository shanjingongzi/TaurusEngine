#include "Core.h"
class ICollisionDetection;
class IGraphics;
/*
 * 演员分为行为和展示
 */

class Actor
{
	public:
		Actor();
		~Actor();
	private:
		IGraphics *graphics;
		ICollisionDetection *cllisonDetection;
};
