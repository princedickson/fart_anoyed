#pragma once
#include "Vec2.h"
 
class rectf
{
public:
    rectf() = default;
    rectf(float in_x, float in_y, float in_up, float in_down);
    rectf(const Vec2& upleft, const Vec2& downright);
    rectf(const Vec2& upleft, float width, float height);
    bool isoverlapping(const rectf& other)const;

public:
    float x;
    float y;
    float up;
    float down;
private:

};
