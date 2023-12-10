/**
  * @file main.cpp
  * @author Reiky
  * @brief 
  **************************************************************************
  * 3．上机调试第七章作业题：“三．1”和“三．2”程序，分析运行结果。
  **************************************************************************
  * @version 0.1
  * @date 2023-12-10
  * 
  * @copyright Copyright (c) 2023
  * @see 《C++语言基础教程》（第3版）吕凤翥.清华大学出版社 Page 285
  */
#include <iostream>
#include "三_1.hpp"
#include "三_2.hpp"
using namespace std;

int main(int argc, char* argv[]) {
        if (argc > 1) {
                string argument = argv[1];
                if (argument == "3-1") {
                        三_1::main();
                        cout << "Executing 3-1 code" << endl;
                } else if (argument == "3-2") {
                        三_2::main();
                        cout << "Executing 3-2 code" << endl;
                } else {
                        cout << "Invalid argument,please try again.\n参数错误❌，请重试。\n请指定一个参数\n如：\n3-1\t\t3-2" << endl;
                }
        } else {
                cout << "参数为空，请指定一个参数\n如：\n3-1\t\t3-2" << endl;
        }
        return 0;
}
