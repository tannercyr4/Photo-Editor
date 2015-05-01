#ifndef REMOVERED_H
#define REMOVERED_H
#include "ImageEffect.h"

class RemoveRedEffect : ImageEffect{
public:
	virtual vector<Point> ProcessImage(vector<Point> points)
	{
		for (int i = 0; i < points.size(); i++)
		{
			points[i].setRed(0);
		}
		return points;
	}
};
#endif