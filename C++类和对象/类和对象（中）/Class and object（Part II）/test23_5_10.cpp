#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef int DataType ;



//class Date
//{
//public:
//	Date(int year = 2023, int month = 5, int day = 20)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//Date(Date& d)
//	//{
//	//	cout << "Date(Date& d)" << endl;
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//
//	//	//����д��
//	//	/*d._year = _year;
//	//	d._month = _month;
//	//	d._day = _day;*/
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};

//void func(Date d)
//{}
//
//void func(int i)
//{}
//int main()
//{
//	Date da1(2000);
//	Date da2(da1);
//
//
//	//func(da1);
//	//func(10);
//	//��������Լ�ʵ�����
//	Stack st1;
//	Stack st2(st1);
//	return 0;
//}


//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (NULL == _array)
//		{
//			perror("malloc����ռ�ʧ��!!!");
//			return;
//		}
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	//���
//	Stack(const Stack& st)
//	{
//		_array = (int*)malloc(sizeof(int) * st._capacity);
//		if (nullptr == _array)
//		{
//			perror("malloc ����ռ�ʧ��");
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
//
////class MyQueue
////{
////private:
////	Stack _pushst;
////	Stack _popst;
////};
//
////////һ���ֽ�һ���ֽڵĽ��п���
//////void func(Date d)
//////{}
////
////void func(Date& d)
////{}
////
//////��ֵ����
////////void func(Stack st)
////////{}
////
//////�����ô���
////void func(Stack& st)
////{}
//
////�мǲ�Ҫ���ؾֲ�����������
//Stack& func()
//{
//	Stack st;
//	return st;  //Stack &tmp  = st; ~Stack()
//}
//int main()
//{
//
//	//Date da1;
//	//func(da1);
//
//	/*Stack st1;
//	func(st1);
//	func();*/
//	Stack ret = func();
//	return 0;
//}