#define _CRT_SECURE_NO_WARNINGS 1

#include"Func.h"

//struct Queue
//{
//	//成员函数
//	void Init(int defaultCapacity = 4)
//	{
//
//	}
//};

////struct Stack
//class Stack
//{
//public:
//	//成员函数
//	void Init(int defaultCapacity = 4)
//	{
//		a = (int*)malloc(sizeof(int) * capacity);
//		if (a == nullptr)
//		{
//			cout << "malloc申请空间失败" << endl;
//			return;
//		}
//		capacity = defaultCapacity;
//		top = 0;
//	}
//	void Push(int x)
//	{
//		//扩容......
//
//		a[top++] = x;
//	}
//	void Destroy()
//	{
//		free(a);
//		a = nullptr;
//		top = capacity;
//	}
//private:
//	//成员变量
//	int* a;
//	int top;
//	int capacity;
//};

//class Date
//{
//public:
//	void Init(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//};


//int main()
//{
//	//struct Stack st1;//这里是C语言的语法，即利用结构体类型创建了一个结构体变量
//	//st1.Init(20);
//
//	//Stack st2;//C++中把struct升级成了类，C语言是不可以这么使用的
//	//st2.Init();
//	//st2.Push(1);
//	//st2.Push(2);
//	//st2.Push(3);
//	//st2.Push(4);
//	//st2.Destroy();
//	return 0;
//}



//int main()
//{
//	Stack st1;
//	Stack st2;
//	cout << sizeof(st1) << endl;
//	return 0;
//}

//int main()
//{
//	//Date._year = 25;//错误，没有进行类的实例化
//	Date da1;
//	Date da2;
//	return 0;
//}


//class Date
//{
//public:
//	void Init(int year)
//	{
//		_year = year;
//	}
//private:
//	int _year;
//};
//int main()
//{
//	Date da1;
//	Date da2;
//	cout << sizeof(da1) << endl;
//	return 0;
//}