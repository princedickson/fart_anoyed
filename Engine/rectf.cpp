#include "rectf.h"

rectf::rectf(float in_x, float in_y, float in_up, float in_down)

	:
	x(in_x),
	y(in_y),
	up(in_up),
	down(in_down)

{
}

rectf::rectf(const Vec2& upleft, const Vec2& downright)
	:
	rectf( upleft.x,upleft.y,downright.x,downright.y)
{
}

rectf::rectf(const Vec2& upleft, float width, float height)
	:
	rectf(upleft,upleft + Vec2(width, height))
{
}

bool rectf::isoverlapping(const rectf& other) const
{
	return x > other.y&& y < other.x
		&& up > other.down&& down < other.up;
				

}
