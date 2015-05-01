#ifndef GREYSCALE_H
#define GREYSCALE_H
#include "ImageEffect.h"

class Greyscale : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	{
		int r = 0; 
		int g = 0;
		int b = 0;
		int average = 0;

		for (int i = 0; i < points.size(); i++)
		{
			r = points[i].getRed();
			g = points[i].getGreen();
			b = points[i].getBlue();

			average = (r + g + b) / 3;

			points[i].setRed(average);
			points[i].setGreen(average);
			points[i].setBlue(average);
		}

		return points;
	}
};

#endif