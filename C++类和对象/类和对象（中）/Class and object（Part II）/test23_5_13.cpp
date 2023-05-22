#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stdbool.h>
//using namespace std;
//
//class Date
//{
//public:
//	//构造函数
//	Date(int year = 23, int month = 5, int day = 20)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
	//////拷贝构造
	////Date (const Date& d)
	////{
	////	cout << "Date(const Date& d)" << endl;
	////	_year = d._year;
	////	_month = d._month;
	////	_day = d._day;
	////}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//	
//	/*void operator=(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}*/
//
//	/*Date& operator=(const Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date da1(19, 5, 21);
//	Date da2(20, 5, 20);
//	//da1 < da2;//相当于operator<(da1,da2);
//	//da1.operator<(da2);//有全局调用全局，没有全局就可以调用成员函数
//
//	//已经存在的两个对象之间进行拷贝赋值---运算重载函数
//	da1 = da2;
//	//用一个已经存在的对象去初始化另一个对象---本质是构造函数
//	Date da3(da1);
//
//	return 0;
//}

//int main()
//{
//	Date da1(23, 5, 14);
//	Date da2, da3;
//	da3 = da2 = da1;
//
//	return 0;
//}



//int main()
//{
//	Date da1(23, 5, 20);
//	da1 = da1;//检查是否自己给自己赋值
//}

//int main()
//{
//	Date da1(23, 5, 20);
//	Date da2, da3;
//	da3 = da2 = da1;
//}