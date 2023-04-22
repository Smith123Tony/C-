#define _CRT_SECURE_NO_WARNINGS 1


////参数类型不同
//#include<iostream>
//using namespace std;
//
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//int main()
//{
//	cout << Add(10, 20) << endl;
//	cout << Add(10.10, 20.20) << endl;
//	return 0;
//}


////参数个数不同
//#include<iostream>
//using namespace std;
//
//void func()
//{
//	cout << "func()" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)" << endl;
//}
//int main()
//{
//	func();
//	func(100);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
////如果是函数参数的名字的顺序发生改变的话，是不会构成函数重载的
//void func(int a, char b)
//{
//	cout << "func(int a, char b)" << endl;
//}
//
//void func(char a,int b)
//{
//	cout << "func(char a,int b)" << endl;
//}
//
//int main()
//{
//	func(1, 'a');
//	return 0;
//}


////如果是函数参数的名字的顺序发生改变的话，是不会构成函数重载的
//#include<iostream>
//using namespace std;
//
//void func()
//{
//	cout << "func(char a, int b)" << endl;
//}
//
//void func(int a = 0)
//{
//	cout << "func(int a,char b)" << endl;
//}
//int main()
//{
//	//func('a', 1);
//	//func(2, 'b');
//	func();//注意一点就是无参调用时编译器就会进行报错
//	return 0;
//}

#include"Stack.h"
int main()
{
	struct Stack st;
	StackInit(&st, 5);
	StackInit(&st, 5.5);
	return 0;
}