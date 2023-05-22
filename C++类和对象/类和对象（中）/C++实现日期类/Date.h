#pragma once

#include<iostream>
#include<stdbool.h>
#include<assert.h>
using namespace std;

class Date
{
	//��Դ������������Դ��������Ҫ���Ƿ����޶��������ƣ����������ﲻ��Ҫ
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	//���캯��
	Date(int year = 22, int month = 5, int day = 20);

	//����Ҫд�������캯��
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

	Date& operator++();//ǰ��++
	Date operator++(int);//����++
	Date& operator--();//ǰ��--
	Date operator--(int);//����++

	//��������������������
	int operator-(const Date& d)const;
private:
	int _year;
	int _month;
	int _day;
};
//ȫ�ֺ���
ostream& operator<<(ostream& out, const Date& d);
istream& operator>>(istream& in, Date& d);