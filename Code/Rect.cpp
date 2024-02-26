#include "Rect.h"

Rect::Rect()
{
	Point p;
	_coord = p;
	_w = 1;
	_h = 1;
}

Rect::Rect(int x, int y, int w, int h)
{
	_coord.setPosition(x, y);
	_w = w;
	_h = h;
}

Rect::~Rect()
{
	_w = 0;
	_h = 0;
}

int Rect::getH()
{
	return _h;
}

int Rect::getY()
{
	return _w;
}

Point Rect::getPosition()
{
	return _coord;
}

const Point Rect::getPosition() const
{
	return _coord;
}