#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
using namespace std;

//void func(int a = 0)
//{
//	cout << a << endl;
//}

//void func(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl << endl;
//	cout << "b = " << b << endl << endl;
//	cout << "c = " << c << endl << endl;
//}

//半缺省
//void func(int a, int b, int c = 3)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//int main()
//{
//	func(4, 5);
//	/*func(4, 5);
//	func(4, 5, 6);*/
//	return 0;
//}


//缺省参数传参样例:栈

#include"Stack.h"

int main()
{
	struct Stack st1;
	StackInit(&st1, 100);

	struct Stack st2;
	StackInit(&st2);
	return 0;
}