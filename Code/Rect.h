#pragma once
#include "Point.h"

class Rect
{
private:
	Point _coord;
	int _w;
	int _h;
public:
	Rect();
	Rect(int x,int y, int w, int h);

	~Rect();

	int getH();
	int getY();
	Point getPosition();
	const Point getPosition() const;
};

