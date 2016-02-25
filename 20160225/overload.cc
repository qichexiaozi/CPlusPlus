 ///
 /// @file    voerload.cc
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-24 23:29:48
 ///
#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;
extern "C"{
int add(int a,int b)
{
		return a+b;
}
}

int add(int a,int b,int c)
{
		return a+b+c;
}

double add(double a,double b)
{
		return a+b;
}

int main(void)
{
		cout<<"a+b="<<add(3,4)<<endl;	
		cout<<"a+b+c="<<add(3,4,5)<<endl;
		cout<<"a+b="<<add(1.3,2.2)<<endl;
		return 0;
}
