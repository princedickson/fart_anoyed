#pragma once
#include "Vec2.h"
#include "Graphics.h"


class Ball
{
public:
	Ball(const Vec2 pos_in, Vec2& vel_in);
	void Draw(Graphics& gfx)const ;
	void Update( float dt );

private:
	static constexpr float radius = 7.0f;
	Vec2 vel;
	Vec2 pos;
};
