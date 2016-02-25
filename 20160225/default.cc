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
int add(int a,int b=2)
{
		return a+b;
}
}

int add(int a,int b,int c=0)//注意默认参数产生的二义性
{
		return a+b+c;
}

double add(double a,double b=0,double c=0)//缺省参数的设置必须从右到左进行
{
		return a+b+c;
}

int main(void)
{

		cout<<"a+b="<<add(3)<<endl;	
		cout<<"a+b+c="<<add(3,4,5)<<endl;
		return 0;
}
