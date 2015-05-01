#ifndef NEGATEBLUE_H
#define NEGATEBLUE_H
#include "ImageEffect.h"

class NegateBlue : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	{

		for (int i = 0; i < points.size(); i++)
		{
			int v = 0;
			v = points[i].getBlue();
			v = 255 - v;
			points[i].setBlue(v);
		}
		return points;
	}

};


#endif