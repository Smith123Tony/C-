#pragma once

#include<iostream>
#include<stdbool.h>
#include<assert.h>
using namespace std;

class Date
{
	//友源函数，对于友源函数不需要考虑访问限定符的限制，声明在哪里不重要
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	//构造函数
	Date(int year = 22, int month = 5, int day = 20);

	//不需要写拷贝构造函数
	Date (const Date& d)
	{
		cout << "Date(const Date& d)" << endl;
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	void Print()const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	bool operator<(const Date& x)const;
	bool operator==(const Date& x)const;
	bool operator<=(const Date& x)const;
	bool operator>(const Date& x)const;
	bool operator>=(const Date& x)const;
	bool operator!=(const Date& x)const;

	static int GetMonthDay(int year, int month);

	Date& operator+=(int day);
	Date operator+(int day)const;
	Date& operator -=(int day);
	Date  operator-(int day)const;

	Date& operator++();//前置++
	Date operator++(int);//后置++
	Date& operator--();//前置--
	Date operator--(int);//后置++

	//计算两个日期相差多少天
	int operator-(const Date& d)const;
private:
	int _year;
	int _month;
	int _day;
};
//全局函数
ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);