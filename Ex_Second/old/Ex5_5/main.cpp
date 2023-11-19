/***
*@file		main.cpp
*@brief		An Example of class TPoint.
*@author	Reiky
*@date		Nov.15.2023
*@see		Book page 172.
*/
#include <iostream>
#include "class.h"
int main()
{
	TPoint P1(5,7);
	TPoint P2(P1);
	cout<<"P2="<<P2.Xcoord()<<","<<P2.Ycoord()<<endl;
}
