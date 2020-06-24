#include "Ball.h"
#include "SpriteCodex.h"

Ball::Ball(const Vec2 pos_in, Vec2& vel_in)
	:
	pos(pos_in),
	vel(vel_in)
{
}

void Ball::Draw(Graphics gfx, Color c) const
{
	SpriteCodex::DrawBall(pos,gfx);
}
