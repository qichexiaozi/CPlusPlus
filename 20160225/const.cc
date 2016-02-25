 ///
 /// @file    const.c
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-24 18:49:59
 ///
#include <iostream>
using std::cout;
using std::endl;

#define MAX 100


namespace B
{
		namespace A
		{
				void printA()
				{
						cout<<"this is A"<<endl;
				}
		}//end of namespaceA
		void printB()
		{
				cout<<"this is B"<<endl;
		}
}//end of namespaceB

int main(void)
{
		B::A::printA();
		B::printB();
		int a=3;
		//const int *p1=&a;
		//*p1=4;
		int * const p2=&a;
		*p2=5;
		cout<<MAX<<endl;
		cout<<"a="<<a<<endl;
}

