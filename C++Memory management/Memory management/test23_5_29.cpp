#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//int main()
//{
//	int* p1 = (int*)calloc(4, sizeof(int));
//	int* p2 = (int*)realloc(p1, sizeof(int));
//	free(p2);
//
//	return 0;
//}	

//int main()
//{
//	int* p1 = (int*)malloc(sizeof(int));
//	free(p1);
//
//	int* p2 = new int;
//	delete p2;
//
//	int* p3 = (int*)malloc(sizeof(int) * 10);
//	free(p3);
//
//	//C++申请10个int的数组
//	int* p4 = new int[10];
//	delete[] p4;
//
//	//申请一个数组，初始化为10。
//	int* p5 = new int(10);
//	delete p5;
//
//	int* p6 = new int[10] {5, 2, 0};
//	delete[] p6;
//	return 0;
//}


////C语言创建节点
//struct ListNode
//{
//	int _val;
//	struct ListNode* _next;
//
//	ListNode(int x)
//		:_val(x)
//		, _next(NULL)
//	{}
//};
//
//struct ListNode* BuyListNode(int x)
//{
//	//只是单纯的开空间
//	struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//	//检查/
//	newnode->_next = NULL;
//	newnode->_val = x;
//	return newnode;
//}
//int main()
//{
//	struct ListNode* n1 = BuyListNode(1);
//	struct ListNode* n2 = BuyListNode(2);
//	struct ListNode* n3 = BuyListNode(3);
//
//	//开空间+调用构造函数初始化
//	ListNode* nn1 = new ListNode(1);
//	ListNode* nn2 = new ListNode(2);
//	ListNode* nn3 = new ListNode(3);
//	return 0;
//}



//class A
//{
//public:
//	A(int a, int b)
//		: _a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	A(const A& aa)
//		:_a(aa._a)
//	{
//		cout << "A(const A& aa):" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	//A* p1 = (A*)malloc(sizeof(A));
//	//A* p2 = new A(1);//
//	//free(p1);
//	//delete p2;
//
//	//A* p5 = (A*)malloc(sizeof(A) * 10);
//	////A* p6 = new A[10]{ 1,2,3,4 ,5,6,7,8,9,10 };
//	//A* p6 = new A[4]{ A(1,2),A(2,3),A(3,4),A(4,5) };
//	//free(p5);
//	//delete[] p6;
//}

//int main()
//{
//	int* p3 = (int*)operator new(sizeof(int));
//	int* p4 = new int;
//	operator delete(p3);
//	delete p4;
//
//	A* p1 = (A*)operator new(sizeof(A));
//	A* p2 = new A(1, 1);
//	operator delete(p1);
//	delete p2;
//	
//	
//	////抛出异常
//	//int* p1 = nullptr;
//	//try
//	//{
//	//	do
//	//	{
//	//		p1 = new int[1024 * 1024];
//	//		cout << p1 << endl;
//	//	} while (p1);
//	//}
//	//catch (const exception& e)
//	//{
//	//	cout << e.what() << endl;
//	//}
//	//do
//	//{
//	//	//p1 = (int*)malloc(1024 * 1024);
//	//	p1 = new int[1024 * 1024];
//	//	cout << p1 << endl;
//	//} while (p1);
//	return 0;
//}


//typedef int DataType;
//class Stack
//{
//public:
//	Stack(size_t capacity = 10)
//	{
//		_array = (DataType*)malloc(capacity * sizeof(DataType));
//		if (nullptr == _array)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_size = 0;
//		_capacity = capacity;
//	}
//	void Push(const DataType& data)
//	{
//		// CheckCapacity();
//		_array[_size] = data;
//		_size++;
//	}
//	~Stack()
//	{
//		if (_array)
//		{
//			free(_array);
//			_array = nullptr;
//			_capacity = 0;
//			_size = 0;
//		}
//	}
//private:
//	DataType* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//int main()
//{
//	//需要申请一个堆上的对象
//	//这里用malloc创建对象是不合适的，因为malloc没有初始化也没有清理资源
//	//这里可以用new来创建对象
//	Stack* p1 = new Stack;
//	delete p1;
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a = 0)
//		: _a(a)
//	{
//		cout << "A():" << this << endl;
//	}
//	~A()
//	{
//		cout << "~A():" << this << endl;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	//构造函数不能显式调用，我们之前构造函数都是自动调用的，那如果想显式调用该怎么办呢？
//	//定位new表达式(placement-new)可以显式调用构造函数
//
//	A* p1 = (A*)malloc(sizeof(A));
//	new(p1)A;//注意A类的构造函数有参数时，此处需要传参，这已经不是new的用法了，而是new关键字的其他用法，叫做定位new
//	p1->~A();//这里就是显式调用析构函数
//	free(p1);
//	return 0;
//}

//int main()
//{
//	char* p1 = new char[1024 * 1024 * 1024] {'b', 'i', 't', '\0'};
//	cout << (void*)p1 << endl;
//	return 0;
//}