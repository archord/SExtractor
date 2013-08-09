#pragma once

#include <string>
using namespace std;

class FitsFile
{
private:
	string filename;
	int width;
	int height;
	int pixSize;		//bit
	float *image;
public:
	FitsFile(void);
	virtual ~FitsFile(void);
};

