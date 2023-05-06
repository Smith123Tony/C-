#define _CRT_SECURE_NO_WARNINGS 1
//Class and object (Part II)

#include<iostream>
using namespace std;


//空类class Date{};

////构造函数
//class Date
//{
//public:
//	/*void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date da1(2023,5,1);
//	da1.Print();
//}


//构造函数的重载
typedef int DataType;
class Stack
{
public:
	//构造函数
	Stack(int capacity = 4)
	{
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}
		_capacity = capacity;
		_size = 0;
	}
	Stack(DataType* a, int n)
	{
		cout << "Stack(DataType* a, int n)" << endl;
		_array = (DataType*)malloc(sizeof(DataType) * n);
		if (NULL == _array)
		{
			perror("malloc申请空间失败!!!");
			return;
		}
		memcpy(_array, a, sizeof(DataType) * n);
		_capacity = n;
		_size = n;
	}
	void Push(DataType data)
	{
		CheckCapacity();
		_array[_size] = data;
		_size++;
	}
	void Pop()
	{
		if (Empty())
			return;
		_size--;
	}
	DataType Top() { return _array[_size - 1]; }
	int Empty() { return 0 == _size; }
	int Size() { return _size; }
	//析构函数
	~Stack()
	{
		cout << "~Stack()" << endl;
		if (_array)
		{
			free(_array);
			_array = NULL;
			_capacity = 0;
			_size = 0;
		}
	}
	void CheckCapacity()
	{
		if (_size == _capacity)
		{
			int newcapacity = _capacity * 2;
			DataType* temp = (DataType*)realloc(_array, newcapacity *
				sizeof(DataType));
			if (temp == NULL)
			{
				perror("realloc申请空间失败!!!");
				return;
			}
			_array = temp;
			_capacity = newcapacity;
		}
	}	
private:
	
	DataType * _array;
	int _capacity;
	int _size;
};
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = sizeof(a) / sizeof(int);
//	Stack s(a, n);//对象实例化时编译器会自动调用构造函数
//	//s.Init();
//	cout << s.Top() << endl;
//	cout << s.Size() << endl;
//	s.Pop();
//	s.Pop();
//	cout << s.Top() << endl;
//	cout << s.Size() << endl;
//	//s.Destroy();//编译器会自动调用析构函数
//	return 0;
//}


class Date
{
public:
	//C++是支持全缺省或者半缺省，当然C++也支持函数重载，
	//语法上无参的和全缺省的函数重载是可以同时存在的，依然是构成函数重载
	//但是无参调用会存在歧义，因为编译器不知道到底调用哪个
	Date(int year , int month , int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	//内置类型
	//C++11支持，这里并不是初始化，这里只是声明（并没有开辟空间）
	//故这里给的值是默认的缺省值，是给编译器生成的默认构造函数用的
	int _year = 2;
	int _month = 2;
	int _day = 2;
};
int main()
{
	Date da1;
	da1.Print();
	Date da2(23,5,20);
	da2.Print();
}