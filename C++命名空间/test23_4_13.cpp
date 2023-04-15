#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//
////域
//namespace hello
//{
//	//hello这个域就会把域中的内容(rand)进行一个隔离
//	//这里要注意，域中的rand与主函数中的rand不是一回事。
//	int rand = 0;
//}
//
//int main()
//{
//	printf("%d\n", rand);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
////int a = 0;
//
//namespace hello
//{
//	int a = 2;
//}
//
//int main()
//{
//	//int a = 1;
//	printf("%d\n", a);//访问的是局部域,如果说把主函数
//	//的的a去掉的话，这个访问的就是全局域中的变量a
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int a = 2;
//
//namespace hello
//{
//	int a = 1;
//}
//
////展开命名空间
////using namespace hello;
//
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//namespace hello
//{
//	int rand = 0;
//}
//
//int main()
//{
//	printf("%d\n", hello::rand);//直接访问命名空间域中的rand
//	printf("%p\n", rand);//访问库里的，库中的rand是一个函数名，在全局域中
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//
//namespace hello
//{
//	int rand = 10;
//	
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int data;
//	};
//}
//
//int main()
//{
//	return 0;
//}


////嵌套命名空间
//#include<stdio.h>
//#include<stdlib.h>
//namespace N1
//{
//	int a = 0;
//	int b = 1;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	namespace N2
//	{
//		int a = 1;
//		int c = 0;
//		int d = 0;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//int main()
//{
//	printf("%d\n", N1::a);
//	printf("%d\n", N1::N2::a);
//	printf("%d\n", N1::Add(1, 3));
//	return 0;
//}

#include<iostream>

//展开某个
using std::cout;
using std::endl;

int main()
{
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	cout << "hello world" << endl;
	cout << "hello world" << endl;

	return 0;
}