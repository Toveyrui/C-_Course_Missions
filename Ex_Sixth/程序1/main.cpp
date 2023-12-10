/*
*@file main.cpp
*@brief <多继承>练习题1
*************************************************************************
*@brief <多继承>
*1．编写多继承应用程序，要求如下：定义类B1、B2、B3，定义派生类A；派生类的继承顺序是：
*公有继承B2，公有继承B1；定义B3的对象bb作为派生类的私有数据成员；定义派生类的对象aa，
*输出结果。
*************************************************************************
*@author Reiky
*@version 1.0
*@date 2020-10-06
*@see Page 257
*/
#include <iostream>
using namespace std;
class B1
{
        public:
                B1(){cout<<"Constructing B1 "<<endl;}
                ~B1(){cout<<"Destructing B1"<<endl;}
};
class B2
{
        public:
                B2(){cout<<"Constructing B2 "<<endl;}
                ~B2(){cout<<"Destructing B2"<<endl;}
};
class B3
{
        public:
                B3(){cout<<"Constructing B3"<<endl;}
                ~B3(){cout<<"Destructing B3"<<endl;}
};
class A:public B2,public B1
{
        private:
                B3 bb;
        public:
                A(){cout<<"Constructing A"<<endl;}
                ~A(){cout<<"Destructing A"<<endl;}
};
int main()
{
        A aa;
        return 0;
}