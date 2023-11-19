/***
*@file		main.cpp
*@brief		try to define diffrient life time object
*@author	Reiky
*@date		Nov.16.2023
*@see		Page 190.
*/
#include<iostream>
#include<string>
using namespace std;
class A
{
	public:
		A(const char *st);
		~A();
	private:
		char string[50];
};
A::A(const char *st)
{
	strcpy(string,st);
	cout<<"constructor called for"<<string<<endl;
}
A::~A()
{
	cout<<"Destructor called for"<<string<<endl;
}
void fun()
{
	A FunObject("FunObject");
	static A staticObject("StaticObject");
	cout<<"In main()."<<endl;
}
A GlobalObject("GlobalObject");
int main()
{
	A MainObject("MainObject");
	cout<<"In main(),befor called fun\n";
	fun();
	cout<<"In main(),after called fun\n";
}
