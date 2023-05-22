#define _CRT_SECURE_NO_WARNINGS 1

#include"Date.h"

//构造函数,声明和定义分析不能同时给缺省参数，一般是声明给缺省参数
Date::Date(int year, int month, int day)
{
	if (month > 0 && month < 13 && day>0 && day <= GetMonthDay(year, month))
	{
		_year = year;
		_month = month;
		_day = day;
	}
	else
	{
		cout << "非法日期" << endl;
	}
}

bool Date::operator<(const Date& x)const
{
	if (_year < x._year)
	{
		return true;
	}
	else if (_year == x._year && _month < x._month)
	{
		return true;
	}
	else if (_year == x._year && _month == x._month && _day < x._day)
	{
		return true;
	}
	return false;
}

bool Date::operator==(const Date& x)const
{
	return _year == x._year
		&& _month == x._month
		&& _day == x._day;
}

bool Date::operator<=(const Date& x)const
{
	return *this < x || *this == x;
}

bool Date::operator>(const Date& x)const
{
	return !(*this <= x);
}

bool Date::operator>=(const Date& x)const
{
	return !(*this < x);
}

bool Date::operator!=(const Date& x)const
{
	return !(*this == x);
}
int Date::GetMonthDay(int year, int month)
{
	//由于要频繁调用daysArr，所以我们把daysArr放到静态区
	static int daysArr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) && month == 2)
	if (month == 2 && ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
	{
		return 29;
	}
	else
	{
		return daysArr[month];
	}
	return daysArr[month];
}

//+=复用+
//Date& Date::operator+=(int day)
//{
//	*this = *this + day;
//	return *this;
//}

Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= -day;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}

//+复用+=
Date Date::operator+(int day)const
{
	Date tmp(*this);
	tmp += day;
	/*tmp._day += day;
	while (tmp._day > GetMonthDay(tmp._year, tmp._month))
	{
		tmp._day -= GetMonthDay(tmp._year, tmp._month);
		tmp._month++;
		if (tmp._month == 13)
		{
			tmp._year++;
			tmp._month = 1;
		}

	}
	return tmp;*/
	//出了作用域后tmp销毁，所以不能用引用返回
	return tmp;
}

Date& Date::operator -=(int day)
{
	if (day < 0)
	{
		return *this += -day;
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 13;
			--_year;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}

Date Date:: operator-(int day)const
{
	Date tmp = *this;//这里是拷贝构造
	tmp -= day;
	return tmp;
}

//前置++
Date& Date::operator++()
{
	*this += 1;
	return *this;
}

//后置++
//增加int参数并不是为了接收具体的值，这里仅仅是占位，为了就是跟前置++构成重载
Date Date::operator++(int)
{
	Date tmp = *this;
	*this += 1;
	return tmp;
}

//前置--
Date& Date::operator--()
{
	*this -= 1;
	return *this;
}

//后置--
Date Date::operator--(int)
{
	Date tmp = *this;
	*this -= 1;
	return tmp;
}

//两个日期相差几天
int Date::operator-(const Date& d)const
{
	//默认认为第一个日期大，第二个小
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;	
	}
	int n = 0;
	while (min != max)
	{
		++min;
		++n;
	}
	return n * flag;
}

//这里流插入的实现要写成全局+友源
ostream& operator<<(ostream& out, const Date& d)
{
	out << d._year << "年" << d._month << "月" << d._day << "日" << endl;
	return out;
}

istream& operator>>(istream& in, Date& d)
{
	int year, month, day;
	in >> year >> month >> day;
	if (month > 0 && month < 13 && day>0 && day <= Date::GetMonthDay(year, month))
	{
		d._year = year;
		d._month = month;
		d._day = day;
	}
	else
	{
		cout << "非法日期" << endl;
		assert(false);
	}
	return in;
}