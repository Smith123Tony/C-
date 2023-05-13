#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdbool.h>
using namespace std;

class Date
{
public:
	Date(int year = 23, int month = 5, int day = 20)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
//private:
	int _year;
	int _month;
	int _day;
};
bool operator<(const Date& x1, const Date& x2)
{
	if (x1._year < x2._year)
		return true;
	else if (x1._year == x2._year && x1._month < x2._month)
		return true;
	else if (x1._year == x2._year && x1._month == x2._month && x1._day < x2._day)
		return true;
	return false;
}
int main()
{
	Date da1(19, 5, 21);
	Date da2(20, 5, 20);
	da1 < da2;//Ïàµ±ÓÚoperator(da1,da2);
	operator<(da1, da2);
	return 0;
}