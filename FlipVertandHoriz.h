#ifndef FIPVERTHORIZ_H
#define FLIPVERTHORIZ_H
#include "ImageEffect.h"

class FlipVertHoriz : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	{
		Point temp;
		for (int i = 0; i < points.size() / 2; i++)
		{
			temp = points[i];
			points[i] = points[points.size() - i - 1];
			points[points.size() - i - 1] = temp;
		}
	 return points;
	}
};
#endif