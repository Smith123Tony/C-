#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	char _a;
//};
//
//int main()
//{
//	A a1;
//	cout << sizeof(A) << endl;
//	cout << sizeof(a1) << endl;
//	return 0;
//}


////�����н��г�Ա������������ʲô��û�е�ʱ�򣨼����ࣩ
//#include<iostream>
//using namespace std;
//class A1
//{
//public:
//	void f1()
//	{
//
//	}
//};
//
//class A2
//{
//
//};
//int main()
//{
//	A1 a1;
//	A1 a2;
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << &a1 << endl;
//	cout << &a2 << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		//this = nullptr;����
//		//thisָ�벻�������βκ�ʵ��֮�������ʽ���ݣ����ǿ����ں����ڲ�������ʽʹ��
//		cout << this << endl;
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//
//	////�������Գ�Ա�����Ĵ���
//	//void Print(Data* this)
//	//{
//	//	cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	//}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date da1, da2;
//	da1.Init(2023, 5, 20);
//	da2.Init(2023, 5, 21);
//	da1.Print();
//	da2.Print();
//	////�������Ե��õĵط�Ҳ����д���
//	//da1.Print(&da1);
//	//da2.Print(&da2);
//	return 0;
//}



////��������
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}




////���б���
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//	void Print()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	
//	//thisָ�벻�������βκ�ʵ��֮�������ʽ���ݣ����ǿ����ں����ڲ�������ʽʹ��
//	//A::Print(nullptr);
//	//A::Print(p);
//	
//	//A::Print();//thisָ��ʲôҲ�ղ���
//	return 0;
//}