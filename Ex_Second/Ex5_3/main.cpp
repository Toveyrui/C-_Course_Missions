/***
*@file		main.coo
*@brief		Another example of class TDate.
*@author	Reiky
*@date		Nov.15.2023
*@see		Book page 170
*/
#include <iostream>
#include "class.h"
int main(){
	using namespace std;
	TDate1 today(1998,4,9),tomorrow(1998,4,10);
	cout<<"today is";
	today.Print();
	cout<<"tomorrow is";
	tomorrow.Print();
}
