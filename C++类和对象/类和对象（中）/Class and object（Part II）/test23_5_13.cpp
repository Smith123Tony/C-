#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<stdbool.h>
//using namespace std;
//
//class Date
//{
//public:
//	//���캯��
//	Date(int year = 23, int month = 5, int day = 20)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
	//////��������
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
//	//da1 < da2;//�൱��operator<(da1,da2);
//	//da1.operator<(da2);//��ȫ�ֵ���ȫ�֣�û��ȫ�־Ϳ��Ե��ó�Ա����
//
//	//�Ѿ����ڵ���������֮����п�����ֵ---�������غ���
//	da1 = da2;
//	//��һ���Ѿ����ڵĶ���ȥ��ʼ����һ������---�����ǹ��캯��
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
//	da1 = da1;//����Ƿ��Լ����Լ���ֵ
//}

//int main()
//{
//	Date da1(23, 5, 20);
//	Date da2, da3;
//	da3 = da2 = da1;
//}