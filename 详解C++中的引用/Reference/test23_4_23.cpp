#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//void Swap(int& m, int& n)
//{
//	int tmp = m;
//	m = n;
//	n = tmp;
//}
//int main()
//{
//	/*int a = 10;
//	int& b = a;
//	int& c = b;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;*/
//
//	int a = 10;
//	int b = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	Swap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	return 0;
//}

//void Swap(int*& p1, int*& p2)
//{
//	int* tmp = p1;
//	p1 = p2;
//	p2 = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	cout << "&a=" << pa << endl;
//	cout << "&b=" << pb << endl;
//	cout << endl;
//	Swap(pa, pb);
//	cout << "&a=" << pa << endl;
//	cout << "&b=" << pb << endl;
//	return 0;
//}


////引用作返回值中的传值返回
//int& fun()
//{
//	int n = 0;
//	n++;
//	return n;
//}
//
//int main()
//{
//	int ret = fun();
//	cout << "ret=" << ret << endl;
//	return 0;
//}

//int& fun(int x)
//{
//	int n = x;
//	n++;
//	return n;
//}
//
//int main()
//{
//	int& ret = fun(10);
//	cout << "ret=" << ret << endl;
//
//	rand();
//	cout << "ret=" << ret << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	//不可以，引用过程中，权限不可以放大
//	const int a = 10;
//	//int& b = a;
//
//	//这里是可以的，这里似乎c拷贝给d，并没有放大获准1缩小权限
//	const int c = 20;
//	int d = c;
//
//	//这里是不可以的，因为引用过程种，权限可以平移或者缩小
//	int x = 100;
//	int& y = x;
//	const int& z = x;
//	x++;
//	return 0;
//}


////常引用
//#include<iostream>
//using namespace std;
//int main()
//{
//	//const int a = 10;
//	//int& b = a;//引用过程中权限不可以放大
//
//	//int x = 10;//引用过程中权限可以平移或者缩小
//	//int& a = x;//这里是引用过程中权限的平移
//	//const int& b = x;//这里是引用过程中权限的缩小，缩小的并不是变量x的权限，而是缩小的引用b作为别名的权限
//	//x++;
//
//	//const int& m = 10;
//
//	//double a = 1.23;//发生隐式类型转换
//	//int b = a;
//	//const int& c = a;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int func1()
//{
//	static int x = 0;
//	return x;
//}
//
//int& func2()
//{
//	static int x = 0;
//	return x;
//}
//
//int main()
//{
//	//const int& ret1 = func1();
//
//	
//	int& ret2 = func2();//权限的平移
//	const int& rret2 = func2();//权限的缩小
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	double j = 1.2;
	if (j > i)
	{
		cout << "hello world!" << endl;
	}
	return 0;
}










