#ifndef NEGATEGREEN_H
#define NEGATEGREEN_H
#include "ImageEffect.h"

class NegateGreen : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	{

		for (int i = 0; i < points.size(); i++)
		{
			int v = 0;
			v = points[i].getGreen();
			v = 255 - v;
			points[i].setGreen(v);
		}
		return points;
	}

};


#endif