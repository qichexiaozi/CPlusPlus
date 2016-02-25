 ///
 /// @file    namespace.c
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-24 18:03:01
 ///
#include <iostream>
using namespace std;


namespace A
{
		void display()
		{
				cout<<"this is A"<<endl;
		}
}

namespace B
{
		void display()
		{
				A::display();
				cout<<"this is B"<<endl;
		}
}

int main(void)
{
		B::display();
}
