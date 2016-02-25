 ///
 /// @file    string.cc
 /// 汽车小子(805183627@qq.com)
 /// @date    2016-02-25 00:13:40
 ///
#include <iostream>
#include <stdlib.h>
#include <string.h>

using std::cout;
using std::endl;
using std::string;
int test0(void)
{
		char strarr[]="hello,world";
		char arr[10]="shenzheng";

		char *ptr=(char *)malloc(sizeof(strarr)+sizeof(arr)+1);
		strcpy(ptr,strarr);//字符串拷贝
		strcat(ptr,arr);//字符串拼接，arr拼接到ptr的后面
		cout<<"ptr="<<ptr<<endl;
		delete ptr;
		ptr=NULL;
		
		

		char arr1[10];
		ptr=strstr(strarr,"hello");//在strarr中寻找hello第一次出现的地方，指针ptr指向hello数组的第一个位置
		strncpy(arr1,ptr,3);//ptr指向的数组中的前三个放到arr1中
		cout<<"arr1="<<arr1<<endl;

		return 0;
}

int test1(void)
{
		string s1="hello";
		string s2="world";
		string s3=s1+s2;
		cout<<"s3="<<s3<<endl;

		s1+='a';
		cout<<"s1="<<s1<<endl;

		s2.append("my name is cpp");//在s2后面追加
		cout<<"s2="<<s2<<endl;

		string s4="your name is C";
		string s5=s4.substr(2,5);//在s4中第二个开始截取5个字符
		cout<<"s5="<<s5<<endl;

		return 0;
}

void test3(void)
{
		int a=1;
		int b=2;
		int &repa=a;
		repa=10;
		cout<<"repa="<<repa<<endl;
		
}

int main(void)
{
		//test0();				
		//test1();
		test3();
}
