/***
*@file		main.cpp
*@brief		The example of class TDate.
*@author	Reiky
*@date		Nov.15.2023
*@see		Book page 168
*/
#include<iostream>
#include "class.h"
int main(){
	using namespace std;
	TDate date1,date2;
	date1.SetDate(1996,5,4);
	date2.SetDate(1998,4,9);
	int leap=date1.IsLeapYear();
	cout<<leap<<endl;
	date1.Print();
	date2.Print();
}
