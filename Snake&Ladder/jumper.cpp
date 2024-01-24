#include "jumper.h"
using namespace std;

Jumper::Jumper(int start, int end, bool type)
	:startPoint(start)
	,endPoint(end)
	,typeOfJumper(type)
{
	if (typeOfJumper == 0)
	{
		if (startPoint < endPoint)
		{
			cout << "Enter the correct points for snake" << endl;
		}
	}
	else if (typeOfJumper == 1)
	{
		if (endPoint < startPoint)
		{
			cout << "Enter the correct points for ladder" << endl;
		}
	}
	else
		cout << "Wrong type of Jumper . Enter 0 for snake or 1 for ladder" << endl;
}
