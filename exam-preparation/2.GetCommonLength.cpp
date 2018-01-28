/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 2
* @compiler GCC
*
*/

#include <iostream>

struct line
{
    double x1;
    double y1;
    double x2;
    double y2;
};

bool isParallelToXaxis(line firstLine, line secondLine)
{
    if (firstLine.y1 == secondLine.y1 && firstLine.y2 && secondLine.y2)
    {
        return true;
    }
    return false;
}

bool isParallelToYaxis(line firstLine, line secondLine)
{
    if (firstLine.x1 == secondLine.x1 && firstLine.x2 && secondLine.x2)
    {
        return true;
    }
    return false;
}


double getCommonLength(line firstLine, line secondLine)
{
	if (isParallelToYaxis(firstLine, secondLine))
	{
		if (firstLine.y1 <= secondLine.y1 && secondLine.y2 <= firstLine.y2)
		{
			return secondLine.y2 - secondLine.y1;
		}
		if (secondLine.y1 <= firstLine.y1 && firstLine.y2 <= secondLine.y2)
		{
			return firstLine.y2 - firstLine.y1;
		}

		if (firstLine.y2 >= secondLine.y1)
		{
			return firstLine.y2 - secondLine.y1;
		}
		if (secondLine.y2 >= firstLine.y1)
		{
			return secondLine.y2 >= firstLine.y1;
		}
	}

	if (isParallelToXaxis(firstLine, secondLine))
	{
		if (firstLine.x1 <= secondLine.x1 && secondLine.x2 <= firstLine.x2)
		{
			return secondLine.x2 - secondLine.x1;
		}
		if (secondLine.x1 <= firstLine.x1 && firstLine.x2 <= secondLine.x2)
		{
			return firstLine.x2 - firstLine.x1;
		}

		if (firstLine.x2 >= secondLine.x1)
		{
			return firstLine.x2 - secondLine.x1;
		}
		if (secondLine.x2 >= firstLine.x1)
		{
			return secondLine.x2 - firstLine.x1;
		}
	}

	return -1;
}


int main()
{
    // Parallel to X axis
    line firstLine =  { 1, 2, 6, 2 };
    line secondLine = { 2, 2, 4, 2 };

    // Parallel to Y axis
    // line firstLine =  { 1, 3, 1, 6 };
    // line secondLine = { 1, 2, 1, 7 };

    std::cout << getCommonLength(firstLine, secondLine) << "\n" ;

    return 0;
}
