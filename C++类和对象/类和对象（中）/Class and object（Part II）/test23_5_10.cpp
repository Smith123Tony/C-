#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


class Date
{
public:
	Date(int year = 2023, int month = 5, int day = 20)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(Date& d)
	{
		cout << "Date(Date& d)" << endl;
		_year = d._year;
		_month = d._month;
		_day = d._day;

		//´íÎóÐ´·¨
		/*d._year = _year;
		d._month = _month;
		d._day = _day;*/
	}
private:
	int _year;
	int _month;
	int _day;
};
void func(Date d)
{}

void func(int i)
{}
int main()
{
	Date da1(2000);
	Date da2(da1);
	func(da1);
	func(10);
	return 0;
}