#ifndef NOISE_H
#define NOISE_H
#include "ImageEffect.h"
#include "RandomNumberGenerator.h"

class AddNoise : ImageEffect{
public:
	 virtual vector<Point> ProcessImage(vector<Point> points)
	{

		for (int i = 0; i < points.size(); i++)
		{
			RandomNumberGenerator _rng;
			int number = _rng.getRandomNumber(-10, 10);
			int v = 0;

			if (number == 0)
			{
				number = _rng.getRandomNumber(-10, 10);
			}

			v = points[i].getRed();
			if (v + number <= 0)
			{
				points[i].setRed(0);
			}
			else if (v + number >= 255)
			{
				points[i].setRed(255);
			}
			else 
			{
				points[i].setRed(v + number);
			}

			v = points[i].getGreen();
			if (v + number <= 0)
			{
				points[i].setGreen(0);
			}
			else if (v + number >= 255)
			{
				points[i].setGreen(255);
			}
			else 
			{
				points[i].setGreen(v + number);
			}

			v = points[i].getBlue();
			if (v + number <= 0)
			{
				points[i].setBlue(0);
			}
			else if (v + number >= 255)
			{
				points[i].setBlue(255);
			}
			else 
			{
				points[i].setBlue(v + number);
			}

		}
		return points;
	}

};


#endif