#include "Bricks.h"

Bricks::Bricks(const rectf& rect_in, Color Color_in)
	:
	rect(rect_in),
	color( Color_in)

{
}

void Bricks::Draw(Graphics gfx, Color c) const
{
	gfx.DrawRect(rect, color); 
}
