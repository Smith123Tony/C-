#define _CRT_SECURE_NO_WARNINGS 1


typedef int DataType;
#include<iostream>
using namespace std;

#include<string.h>
#include<stdlib.h>

//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	//深拷贝
//	Stack(const Stack& st)
//	{
//		_array = (int*)malloc(sizeof(int) * st._capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc 申请空间失败");
//			return;
//		}
//		memcpy(_array, st._array, sizeof(int) * st._top);
//		_top = st._top;
//		_capacity = st._capacity;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		if (_array)
//		{
//			free(_array);
//			_array = NULL;
//			_capacity = 0;
//			_top = 0;
//		}
//	}
//private:
//	DataType* _array;
//	int _capacity;
//	int _top;
//};

//class MyQueue
//{
//public:
//	MyQueue()
//		:_size(0)
//	{}
//	MyQueue(int capacity)
//		:_pushst(capacity)
//		,_popst(capacity)
//		,_size(0)
//	{}
//private:
//	Stack _pushst;
//	Stack _popst;
//};

//int main()
//{
//	MyQueue q1;
//	MyQueue q2(100);
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 10)
//		:_a((int*)malloc(capacity * sizeof(int)))
//		,_top(0)
//		,_capacity(capacity)
//	{
//		if (_a = nullptr)//检查是否开辟成功需要函数体赋值
//		{
//			perror("malloc申请空间失败");
//			exit(-1);
//		}
//		//如果要求数组必须初始化一下依然需要函数体赋值
//		memset(_a, 0, sizeof(int) * capacity);
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//int main()
//{
//	return 0;
//}

////动态开辟二维数组
//class ABC
//{
//public:
//	ABC(int row = 10, int col = 5)
//		:_row(row)
//		,_col(col)
//	{
//		_a = (int**)malloc(sizeof(int*) * row);//数组指针
//		for (int i = 0; i < row; i++)
//		{
//			_a[i] = (int*)malloc(sizeof(int) * col);
//		}
//	}
//private:
//	int** _a;
//	int _row;
//	int _col;
//};

//class D
//{
//public:
//	D(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print()
//	{
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main()
//{
//	D d1(1);
//	d1.Print();
//}

class F
{
public:
	F(int a)
		:_a(a)
	{
		cout << "F(int a)" << endl;
	}
	const F(const F& aa)
		:_a(aa._a)
	{
		cout << "F(int a)" << endl;
	}
private:
	int _a;
};
//int main()
//{
//	F f1(1);
//	F f2 = 2;//隐式类型转换，整型转换成自定义类型
//	//类型转化会产生临时变量。2构造一个A的临时对象，临时对象再拷贝构造
//	//优化之后--->编译器构造一个A的临时形象，临时对象再拷贝
//	int i = 0;
//	double d = 1;
//	return 0;
//}