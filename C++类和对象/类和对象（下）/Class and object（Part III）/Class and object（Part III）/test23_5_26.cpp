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
//	//静态成员函数,没有this指针，指定类域和访问限定符就可以访问。
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
//	//成员变量，属于每一个类对对象，存储对象里面。
//	int _a1 = 1;
//	int _a2 = 2;
//
//	//静态成员变量
//	static int _scount;//静态成员变量为每个类对象所共有共享的，存储在静态区
//};
//
////全局位置类外定义
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
//	friend class Date; // 声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
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
//		// 直接访问时间类私有的成员变量
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
//	class B//内部类天然就是外部类的友元
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
//	//A aa(1);//有名对象
//	//A(2);   //匿名对象
//
//	//有名匿名对象调用成员函数
//	/*Solution s1;
//	s1.Sum_Solution(10);
//
//	Solution().Sum_Solution(20);*/
//
//	////A& ra = A(1);//匿名对象具有常性故这里错误
//	//const A& ra = A(1);//const引用可以延长匿名对象的生命周期，生命周期在当前函数局部域
//	////对于const A& ra = A(1);引用的生命周期在哪里，其生命周期就必须在哪里。
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
////构成函数重载
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
//	//不知道要调用哪一个Func函数，存在歧义
//	//Func1(a1);
//	//Func2(a1);s
//	//Func3();
//	//Func4();
//
//	////传值返回时，产生临时变量(具有常属性)
//	//const A& ra = Func5();
//
//	//同一行表达式中连续的构造+拷贝构造，优化时合二为一例如。
//	
//	//A aa1 = Func5();//拷贝构造+拷贝构造->优化为拷贝构造
//	
//	
//	//A aa3 = 1;  //构造+拷贝构造->优化
//	//Func1(1);   //构造+拷贝构造->优化构造
//	//Func1(A(1));//构造+拷贝构造->优化构造
//	//A ra = 1;   //构造+拷贝构造->优化构造
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
////设计一个类，只能在栈或者堆上创建对象
//int main()
//{
//	//static A aa1;   //静态区
//	//A aa2;          //栈
//	//A* ptr = new A; //堆
//
//	A::GetStackObj();
//	A::GetHeapObj();
//	return 0;
//}