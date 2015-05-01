#ifndef IMAGEEFFECT_H
#define IMAGEEFFECT_H
#include <vector>
#include "Point.h"

using namespace std;

class ImageEffect{
public:
	virtual vector<Point> processImage(vector<Point> points)
	{
		return points;
	}
};


#endif