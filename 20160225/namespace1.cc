 ///
 /// @file    namespace.c
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-24 18:03:01
 ///
#include <iostream>
using std::cout;
using std::endl;

namespace A{
void displsy(){
		cout<<"this is A"<<endl;
}
}

namespace B{
		using namespace A;
		void disply(){
				cout<<"this is B"<<endl;
		}
		A::displsy();
}

int main(void)
{
		B::disply();
		return 0;
}
