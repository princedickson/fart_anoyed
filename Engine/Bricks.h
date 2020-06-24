#pragma once
#include "rectf.h"
#include "Graphics.h"



class Bricks
{
public:
	Bricks(const rectf& rect_in, Color Color_in);
	void Draw(Graphics gfx, Color c)const ;

private:
	rectf rect;
	Color color;
	bool IsDistoryed = false;
};
