/***
*@file		main.cpp
*@brief		对象数组的赋值方法及对象数组的引用。
*@author	Reiky
*@date		Nov.20.2023
*@see		Page 208.
*/
#include<iostream>
class DATE{
	public:
		DATE(){
			mounth=day=year=0;
			cout<<"Default called.\n";
		}
		DATE(int m,int d,int y){
			month = m;
			day = d;
			yearc = y;
			cout<<"Constructor called\n"
		}
		~DATE(){
			cout<<
