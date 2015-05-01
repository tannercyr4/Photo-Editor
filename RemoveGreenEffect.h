#ifndef REMOVE_H
#define REMOVE_H
#include "ImageEffect.h"

class RemoveGreenEffect : ImageEffect{
public:
	virtual vector<Point> ProcessImage(vector<Point> points)
	{
		for (int i = 0; i < points.size(); i++)
		{
			points[i].setGreen(0);
		}
		return points;
	}
};

#endif