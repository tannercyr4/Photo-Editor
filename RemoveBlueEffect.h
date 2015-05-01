#ifndef REMOVEBLUE_H
#define REMOVEBLUE_H
#include "ImageEffect.h"

class RemoveBlueEffect : ImageEffect{
public:
	virtual vector<Point> ProcessImage(vector<Point> points)
	{
		for (int i = 0; i < points.size(); i++)
		{
			points[i].setBlue(0);
		}
		return points;
	}
};
#endif