#ifndef POINT_H
#define POINT_H
#include <string>

using namespace std;

class Point{

private:
	int _red;
	int _green;
	int _blue;

public:

	Point()
	{
		_red = 0;
		_green = 0;
		_blue = 0;
	}

	int getRed()
	{
		return _red;
	}

	void setRed (int red)
	{
		_red = red;
	}

	int getGreen()
	{
		return _green;
	}

	void setGreen(int green)
	{
		_green = green;
	}

	int getBlue()
	{
		return _blue;
	}

	void setBlue(int blue)
	{
		_blue = blue;
	}

	string toString()
	{
		
	}
};


#endif