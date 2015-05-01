#ifndef FIPVERTHORIZ_H
#define FLIPVERTHORIZ_H
#include "ImageEffect.h"

// flip was attempted but not sucessful. the temp variable stores but from there nothing happens.

class FlipVert : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	 {
		int j = 1;
		Point temp;
		for (int i = 0; i < 300 * j; i++)
		{
			temp = points[i];
			points[i] = points[(300 * j) - i];
			points[(300 * j) - i] = temp;

			if ((i == 300 * j) && (300 * j == 56400))
			{
				j++;
			}
		}
		return points;
	 }
};

#endif