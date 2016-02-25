 ///
 /// @file    namespace.c
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-24 18:03:01
 ///
#include <iostream>
using namespace std;

extern int num =0;

namespace A
{
		int num=1;
		void display()
		{
				cout<<"this is A"<<endl;
		}
}

namespace B
{
		int num=2;
		void display()
		{
				int num=3;
				cout<<"the extern num is"<<::num<<endl;
				cout<<"the A num is"<<A::num<<endl;
				cout<<"the B num is"<<B::num<<endl;
				cout<<"the num is"<<num<<endl;
		}
}

int main(void)
{
		B::display();
}
