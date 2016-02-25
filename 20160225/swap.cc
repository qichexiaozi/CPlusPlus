 ///
 /// @file    swap.cc
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-24 21:05:58
 ///
#include <iostream>
using std::cout;
using std::endl;
#if 0
void swap(int a,int b)
{
		int temp=a;
		a=b;
		b=temp;
}
#endif
void swap(int *a,int *b)
{
		int temp=*a;
		*a=*b;
		*b=temp;
}

void swap(int &a,int &b)
{
		int temp=a;
		a=b;
		b=temp;
}

int main(void)
{
		int a=1;
		int b=2;
		int &repa=a;
		repa=b;
		repa=6;
		//swap(a,b);
		cout<<"a="<<a<<","<<"b="<<b<<endl;
}

