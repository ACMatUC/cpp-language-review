#include "Rectangle.h"

Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

Rectangle::~Rectangle()
{
    /* We could do some cleanup here. */
}

int Rectangle::GetLength()
{
    return length;
}

int Rectangle::GetWidth()
{
    return width;
}

int Rectangle::GetArea()
{
    return length * width;
}

void Rectangle::SetLength(int l)
{
    length = l;
}

void Rectangle::SetWidth(int w)
{
    width = w;
}
