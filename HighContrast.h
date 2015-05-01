#ifndef HIGHCONTRAST_H
#define HIGHCONTRAST_H
#include "ImageEffect.h"

class HighContrast : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	{

		for (int i = 0; i < points.size(); i++)
		{
			int v = 0;
			v = points[i].getRed();
			if (v > 128)
			{
				points[i].setRed(255);
			}
			else
			{
				points[i].setGreen(0);
			}

			v = points[i].getGreen();
			if (v > 128)
			{
				points[i].setGreen(255);
			}
			else
			{
				points[i].setGreen(0);
			}

			v = points[i].getBlue();
			if (v > 128)
			{
				points[i].setBlue(255);
			}
			else
			{
				points[i].setBlue(0);
			}
		}
		return points;
	}
};

#endif