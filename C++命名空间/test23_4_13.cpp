#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//
////��
//namespace hello
//{
//	//hello�����ͻ�����е�����(rand)����һ������
//	//����Ҫע�⣬���е�rand���������е�rand����һ���¡�
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
//	printf("%d\n", a);//���ʵ��Ǿֲ���,���˵��������
//	//�ĵ�aȥ���Ļ���������ʵľ���ȫ�����еı���a
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
////չ�������ռ�
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
//	printf("%d\n", hello::rand);//ֱ�ӷ��������ռ����е�rand
//	printf("%p\n", rand);//���ʿ���ģ����е�rand��һ������������ȫ������
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


////Ƕ�������ռ�
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

//չ��ĳ��
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