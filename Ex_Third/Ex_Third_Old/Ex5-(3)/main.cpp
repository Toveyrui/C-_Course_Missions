/***
*@file		main.cpp
*@brief		init a static verb.
*@author	Reiky
*@date		Nov.16.23
*@see		Page 196.
*/
#include<iostream>
using namespace std;
class Count{
	public:
		Count(){count++;}
		static int HM(){return count;}
		~Count(){count--;}
	private:
		static int count;
};
int Count::count=100;
int main(){
	Count c1,c2,c3,c4;
	cout<<Count::HM()<<endl;
}
