/******************************
Tanner cyr
CPTS 122
Assignment 4 ppm manipulation
Time taken: roughly 4 to 5 hours plus a few for the attempted bonus
******************************/
#include <iostream>
#include <string>
#include <istream>
#include <ostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include "Point.h"
#include "StringSplitter.h"
#include "RemoveGreenEffect.h"
#include "ImageEffect.h"
#include "RemoveredEffect.h"
#include "RemoveBlueEffect.h"
#include "NegateRedEffect.h"
#include "NegateGreenEffect.h"
#include "NegateBlueEffect.h"
#include "AddRandomNoise.h"
#include "HighContrast.h"
#include "Greyscale.h"
#include "FlipVertandHoriz.h"
#include "FlipVertical.h"


int main(void)
{
	ifstream infile;
	ofstream outfile;
	string letter = "\0";
	StringSplitter splitter;
	Point pointset;
	vector<string> pieces;
	vector<Point> picture;
	RemoveGreenEffect GreenRemove;
	RemoveRedEffect RedRemove;
	RemoveBlueEffect BlueRemove;
	NegateRed RedNegate;
	NegateGreen GreenNegate;
	NegateBlue BlueNegate;
	AddNoise Noise;
	HighContrast Contrast;
	Greyscale Grey;
	FlipVertHoriz VertHoriz;
	FlipVert Vert;
	int g = 0;
	int x = 0;


	cout << "PPM Image Processor" << endl;
	infile.open("bunny.ppm");
	outfile.open("bunny_out.ppm");

	getline(infile, letter);
	outfile << letter << endl;
	getline(infile, letter);
	outfile << letter << endl;
	getline(infile, letter);
	outfile << letter << endl;

	while (g <= 56400)
	{
		getline(infile, letter);
		pieces = splitter.split(letter, " ");
		for (int i = 0; i < pieces.size() - 1; i = i + 3)
		{
			int k = 0;
			pointset.setRed(stoi(pieces[i]));
			pointset.setGreen(stoi(pieces[i+1]));
			pointset.setBlue(stoi(pieces[i+2]));

			if (k < 15)
			{
				picture.push_back(pointset);
				k++;
			}
		}
		g++;
	}

	while (x != -1)
	{
	cout << "Effects: " << endl;
	cout << "1. Remove Red" << endl;
	cout << "2. Remove Green" << endl;
	cout << "3. Remove Blue" << endl;
	cout << "4. Negate Red" << endl;
	cout << "5. Negate Green" << endl;
	cout << "6. Negate Blue" << endl;
	cout << "7. Add Noise" << endl;
	cout << "8. High Constrast" << endl;
	cout << "9. Greyscale" << endl;
	cout << "10. Flip Vertically and Horizontally" << endl;
	cout << "11. Restore picture" << endl; // in case a wrong value is entered.
	cout << "-1. exit" << endl;
	cin >> x;

	if (x == 1)
	{
		picture = RedRemove.ProcessImage(picture);
	}
	else if (x == 2)
	{
		picture = GreenRemove.ProcessImage(picture);
	}
	else if (x == 3)
	{
		picture = BlueRemove.ProcessImage(picture);
	}
	else if (x == 4)
	{
		picture = RedNegate.ProcessImage(picture);
	}
	else if (x == 5)
	{
		picture = GreenNegate.ProcessImage(picture);
	}
	else if (x == 6)
	{
		picture = BlueNegate.ProcessImage(picture);
	}
	else if (x == 7)
	{
		picture = Noise.ProcessImage(picture);
	}
	else if (x == 8)
	{
		picture = Contrast.ProcessImage(picture);
	}
	else if (x == 9)
	{
		picture = Grey.ProcessImage(picture);
	}
	else if (x == 10)
	{
		picture = VertHoriz.ProcessImage(picture);
	}
	else if (x == 11)
	{
		cout << "Restoring to Normal" << endl;
		x = -1;
	}
	else if (x == -1)
	{
		cout << "Exiting..." << endl;
	}
	else 
	{
		cout << "Invalid Input" << endl;
	}
	}

	for (int i = 0; i < picture.size(); i++)
	{
		outfile << picture[i].getRed() << " " << picture[i].getGreen() << " " << picture[i].getBlue() << " ";
	}
			
	return 0;
}