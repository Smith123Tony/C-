#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int _scount = 0;
//class A
//{
//public:
//	A() { ++_scount; }
//	A(const A & t) { ++_scount; }
//	~A() { --_scount; }
//private:
//};
//
//A aa0;
//
//A Func(A aa)
//{
//	cout << __LINE__ << ":" << _scount << endl;
//	return aa;
//}
//
//int main()
//{
//	cout << __LINE__ << ":" << _scount << endl;
//	A aa1;
//	static A aa2;
//	Func(aa1);
//	cout << __LINE__ << ":" << _scount << endl;
//	return 0;
//}

//int _scount = 0;
//class A
//{
//public:
//	A() { ++_scount; }
//	A(const A& t) { ++_scount; }
//	~A() { --_scount; }
//private:
//};
//
//A aa0;
//void Func()
//{
//	static A aa2;
//	cout << __LINE__ << ":" << _scount << endl;
//}
//
//int main()
//{
//	cout << __LINE__ << ":" << _scount << endl;
//	A aa1;
//	Func();
//	Func();
//	return 0;
//}


//class A
//{
//public:
//	A() { ++_scount; }
//	A(const A& t) { ++_scount; }
//	~A() { --_scount; }
//
//	//��̬��Ա����,û��thisָ�룬ָ������ͷ����޶����Ϳ��Է��ʡ�
//	static int GetCount()
//	{
//		return _scount;
//	}
//
//	void Func1()
//	{
//		GetCount();
//	}
//
//private:
//	//��Ա����������ÿһ����Զ��󣬴洢�������档
//	int _a1 = 1;
//	int _a2 = 2;
//
//	//��̬��Ա����
//	static int _scount;//��̬��Ա����Ϊÿ������������й���ģ��洢�ھ�̬��
//};
//
////ȫ��λ�����ⶨ��
//int A::_scount = 0;
//
//A aa0;
//
//void Func()
//{
//	static A aa2;
//	cout << __LINE__ << ":" << aa2.GetCount() << endl;
//}
//
//int main()
//{
//	cout << __LINE__ << ":" << A::GetCount() << endl;
//	A aa1;
//	Func();
//	Func();
//	return 0;
//}

//class Time
//{
//	friend class Date; // ����������Ϊʱ�������Ԫ�࣬�����������о�ֱ�ӷ���Time���е�˽�г�Ա����
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	Date(int year = 1900, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	void SetTimeOfDate(int hour, int minute, int second)
//	{
//		// ֱ�ӷ���ʱ����˽�еĳ�Ա����
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};

//class A
//{
//private:
//	static int k;//
//	int h;
//public:
//	class B//�ڲ�����Ȼ�����ⲿ�����Ԫ
//	{
//	public:
//		void foo(const A& a)
//		{
//			cout << k << endl;
//			cout << a.h << endl;
//		}
//	private:
//		int b;
//	};
//};
//int A::k = 1;
//int main()
//{
//	A::B b1;
//	b1.foo(A());
//	return 0;
//}



//class A
//{
//public:
//	A(int a = 0)
//		:_a(a)
//	{
//		cout << "A(int a)" << endl;
//	}
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
//
//class Solution
//{
//public:
//	int Sum_Solution(int n)
//	{
//		cout << "Sum_Solution" << endl;
//		return n;
//	}
//};
//
//int main()
//{
//	//A aa(1);//��������
//	//A(2);   //��������
//
//	//��������������ó�Ա����
//	/*Solution s1;
//	s1.Sum_Solution(10);
//
//	Solution().Sum_Solution(20);*/
//
//	////A& ra = A(1);//����������г��Թ��������
//	//const A& ra = A(1);//const���ÿ����ӳ�����������������ڣ����������ڵ�ǰ�����ֲ���
//	////����const A& ra = A(1);���õ�����������������������ھͱ��������
//	return 0;
//}


//class A
//{
//public:
//	A(int a = 10)
//		:_a(a)
//	{
//		cout << "A(int)" << endl;
//	}
//
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A& a)" << endl;
//	}
//
//	A& operator=(const A& aa)
//	{
//		cout << "A& operator=(const A& aa)" << endl;
//		if (this != &aa)
//		{
//			_a = aa._a;
//		}
//		return *this;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//private:
//	int _a;
//};
////���ɺ�������
//void Func1(A aa)
//{
//	
//}
//void Func2(const A& aa)
//{
//
//}
//
//A Func3()
//{
//	A aa;
//	return aa;
//}
//
//A& Func4()
//{
//	static A aa;
//	return aa;
//}
//
//A Func5()
//{
//	A aa;
//	return aa;
//}
//int main()
//{
//
//	A aa2;
//	aa2 = Func5();
//
//	//A a1;
//	//��֪��Ҫ������һ��Func��������������
//	//Func1(a1);
//	//Func2(a1);s
//	//Func3();
//	//Func4();
//
//	////��ֵ����ʱ��������ʱ����(���г�����)
//	//const A& ra = Func5();
//
//	//ͬһ�б��ʽ�������Ĺ���+�������죬�Ż�ʱ�϶�Ϊһ���硣
//	
//	//A aa1 = Func5();//��������+��������->�Ż�Ϊ��������
//	
//	
//	//A aa3 = 1;  //����+��������->�Ż�
//	//Func1(1);   //����+��������->�Ż�����
//	//Func1(A(1));//����+��������->�Ż�����
//	//A ra = 1;   //����+��������->�Ż�����
//	return 0;
//}


//class A
//{
//public:
//	static A GetStackObj()
//	{
//		A aa;
//		return aa;
//	}
//	static A* GetHeapObj()
//	{
//		return new A;
//	}
//private:
//	A()
//	{}
//private:
//	int _a1 = 1;
//	int _a2 = 2;
//};
//
////���һ���ֻ࣬����ջ���߶��ϴ�������
//int main()
//{
//	//static A aa1;   //��̬��
//	//A aa2;          //ջ
//	//A* ptr = new A; //��
//
//	A::GetStackObj();
//	A::GetHeapObj();
//	return 0;
//}