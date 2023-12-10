/**
 * @file 三_1.hpp
 * @auther Reiky
 * @brief
 ***************************************************************************
 * 3．上机调试第七章作业题：“三．1”
 ***************************************************************************
 * @version 0.1
 * @date 2023-12-10
 * 
 * @copyright Copyright (c) 2023
 * @see 《C++语言基础教程》（第3版）吕凤翥.清华大学出版社 Page 285
 */
#include <iostream>

namespace 三_1
{
        using namespace std;
        class A
        {
                public:
                        A(int i, int j){a = i; b = j;}
                        void Move(int x, int y){a += x; b += y;}
                        void Show(){cout<<"("<<a<<","<<b<<")"<<endl;}
                private:
                        int a, b;
        };
        class B:private A
        {
                public:
                        B(int i,int j,int k,int l):A(i,j){x = k;y = l;}
                        void Show(){cout<<x<<","<<y<<endl;}
                        void fun(){Move(3,5);}
                        void f1(){A::Show();}
                private:
                        int x,y;
        };
        int main()
        {
                A e(1,2);
                e.Show();
                B d(3,4,5,6);
                d.fun();
                d.Show();
                d.f1();
                return 0;
        }
}