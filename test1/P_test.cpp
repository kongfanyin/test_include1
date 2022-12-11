#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"ptest.h"//struct template and function prototype

using namespace std;
int main()
{
	rect rplace;
	Polar pplace;
	cout << "enter the x and y value:\n";
	while (cin>>rplace.x>>rplace.y)
	{
		pplace = rect_to_polor(rplace);
		show(pplace);
		cout << "Next two number pls(q to quite): \n";
	}
	cout << "bye\n";
	return 0;
}
