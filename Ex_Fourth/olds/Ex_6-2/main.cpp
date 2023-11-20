/***
*@file		main.cpp
*@brief		一个例子说明使用指向对象的指针作为函数参数的调用方法。
*@author	Reiky
*@date		Nov.20.2023
*@see		Page 203.
*/
#include<iostream>
using namespace std;
class M{
	public:
		M(){x=y=0;}
		M(int i,int j){x=i;y=j;}
		void copy(M *m);
		void setxy(int i,int j){x=i;y=j;}
		void print(){cout<<x<<","<<y<<endl;}
	private:
		int x,y;
};
void M::copy(M *m){
	x=m->x;
	y=m->y;
}
void fun(M m1,M *m2);
int main(){
	M p(5,7),q;
	q.copy(&q);
	fun(p,&q);
	p.print();
	q.print();
}
void fun(M m1,M *m2){
	m1.setxy(12,15);
	m2->setxy(22,25);
}
