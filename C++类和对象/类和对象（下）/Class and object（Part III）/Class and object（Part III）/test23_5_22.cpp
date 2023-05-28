#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year, int month, int day)
		:_year(year)
		,_month(month)
		,_day(day)
	{}
private:
	int _year;
	int _month;
	int _day;
};

//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//
//class B
//{
//public:
//	B(int a, int ref)
//		:_ref(ref)
//		, _n(1)
//	{}
//private:
//	int& _ref;    //引用
//	const int _n;//const成员变量
//};
//int main()
//{
//	B bb(10, 1);
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 520)
//		:_a(a)
//	{
//		cout << "A(int a = 520)" << endl;
//	}
//private:
//	int _a;
//};
//class B
//{
//public:
//	B(int a, int& ref)
//		:_ref(ref)
//		, _n(1)
//		, _aobj(521)
//	{}
//private:
//	int& _ref;   //引用
//	const int _n;//const成员变量
//	A _aobj;     //自定义类型
//	int x;
//};
//int main()
//{
//	int n = 520;
//	B b1(10, n);
//	//B b2(11, 2);
//	return 0;
//}