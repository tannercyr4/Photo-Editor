#ifndef NEGATERED_H
#define NEGATERED_H
#include "ImageEffect.h"

class NegateRed : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	{

		for (int i = 0; i < points.size(); i++)
		{
			int v = 0;
			v = points[i].getRed();
			v = 255 - v;
			points[i].setRed(v);
		}

		return points;
	}

};


#endif