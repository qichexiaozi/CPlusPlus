 ///
 /// @file    cast.cc
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-24 23:52:35
 ///
#include <iostream>
using std::cout;
using std::endl;

int fun(int *pt)
{
		return *pt;
}

int main(void){
		int a=3;
		double d1=static_cast<double>(a);
		cout<<"The d1 is "<<d1<<endl;
		
		const int b=5;
		int *p=const_cast<int *>(&b);
		*p=10;
		cout<<"*p="<<*p<<endl
				<<"b="<<b<<endl;
				
		int c=fun(const_cast<int *>(&b));
		cout<<"The C is "<<c<<endl;
}

