#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Jumper
{
	int startPoint;
	int endPoint;
	bool typeOfJumper;
public:
	Jumper() {}
	Jumper(int start, int end, bool type);
	int getStartPt() { return startPoint; }
	int getEndPt() { return endPoint; }
};
