#define _CRT_SECURE_NO_WARNINGS 1
#include<cmath>
#include<iostream>
#include"ptest.h"
Polar rect_to_polor(rect xypos)
{
	//using namespace std;
	Polar answer;
	answer.distance = sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}
void show(Polar dapos)
{
	using namespace std;
	const double rad_to_double = 57.29577591;//弧度制转角度
	cout <<"distance ="<< dapos.distance << endl;
	cout <<"angle ="<< dapos.angle*rad_to_double <<"degree"<< endl;
	
}