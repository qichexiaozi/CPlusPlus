 ///
 /// @file    new.cc
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-25 04:17:09
 ///
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
		int *p=new int(3);
		*p=4;
		cout<<"the *p is "<<*p<<endl;

		delete p;
		p==NULL;

		int *p1=new int[10];
		for(int i=0;i!=10;i++)
		{
				p1[i]=i;
		}
		for(int j=0;j!=10;j++)
		{
				cout<<"p1"<<j<<"is"<<p1[j]<<endl;
		}
		delete []p1;
		p1=NULL;
}
