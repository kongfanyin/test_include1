#pragma once
//struct template and function prototype
//struct template
#ifndef COORDIN_H_
#define COORDIN_H_
struct  Polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};

//prototypes
Polar rect_to_polor(rect xypos);
void show(Polar dapos);
#endif 
 