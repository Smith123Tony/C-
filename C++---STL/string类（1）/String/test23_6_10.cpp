#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//1.默认构造函数
//int main()
//{
//	string str;
//	return 0;
//}

////2.从字符指针构造函数
//int main()
//{
//	const char* s = "hello world";
//	string str(s);//从字符指针创建字符串
//	return 0;
//}

////3.从字符构造函数
//int main()
//{
//	string str1("hello");
//	return 0;
//}

////4.重复字符构造函数
//int main()
//{
//	string str(5, 'x'); // 创建一个包含5个重复字符'x'的字符串
//	return 0;
//}

////5.复制构造函数
//int main()
//{
//	string str1("Hello");
//	string str2(str1); // 从str1创建str2
//	return 0;
//}



//int main()
//{
//	string s1;
//	string s2("bcd");
//	string s3("abc");
//	string s4("cba");
//	string s5("李四");
//	string s6("abc");
//	string s7("????");
//	cout << (s1 == s2) << endl;
//	cout << (s1 > s2) << endl;
//	cout << (s2 > s3) << endl;
//	cout << (s2 > s4) << endl;
//	cout << (s2 > s5) << endl;
//	cout << (s5 < s6) << endl;
//	cout << (s5 == s7) << endl;
//
//	return 0;
//}