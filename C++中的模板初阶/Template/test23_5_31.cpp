
#include<iostream>
using namespace std;


void Swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}
void Swap(double& left, double& right)
{
	double temp = left;
	left = right;
	right = temp;
}
void Swap(char& left, char& right)
{
	char temp = left;
	left = right;
	right = temp;
}


//模板
//函数模板+类
template<typename T>
void Swap(T& x1, T& x2)
{
	T tmp = x1;
	x1 = x2;
	x2 = tmp;
}

//int main()
//{
//	int a = 10, b = 20;
//	double c = 1.1, d = 2.2;
//	Swap(a, b);
//	Swap(c, d);
//	int* p1 = &a;
//	int* p2 = &b;
//	Swap(p1, p2);
//	return 0;
//}

//template<typename T1,typename T2>
//T1 Func(const T1& x, const T2& y)
//{
//	cout << x << " " << y << endl;
//	return x;
//}
//T1  T2可以是任意类型，比如自定义类型或者内置类型
//函数模板实例化生成具体函数
//函数模板根据调用会自己推导模板参数的类型，实例化出对应的函数
//int main()
//{
//	Func(1, 2);
//	Func(1.1, 2.2);
//	return 0;
//}

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 20, a2 = 30;
//	double d1 = 10.0, d2 = 20.0;
//	cout << Add(a1, a2) << endl;
//	cout << Add(d1, d2) << endl;
//	/*cout << Add((double)a1, d1) << endl;
//	cout << Add(a1, (int)d1) << endl;*/
//
//	//显式示例化
//	cout << Add<int>(a1, d1) << endl;
//	cout << Add<double>(a1, d1) << endl;
//
//	return 0;
//}


//template<class T>
//T* Alloc(int n)
//{
//	return new T[n];
//}
//int main()
//{
//	//这里就必须用到显式示例化了
//	//有些函数无法实现自动退，只能显式示例化
//	double* p1 = Alloc<double>(10);
//	return 0;
//}

//template<class T>
//class Stack
//{
//public:
//	Stack(size_t capacity = 10);
//	void Push(const T& data);
//	~Stack();
//private:
//	T* _array;
//	size_t _size;
//	size_t _capacity;
//};
//
//template<class T>
//Stack<T>::Stack(size_t capacity)
//{
//	/*_array = (T*)malloc(capacity * sizeof(T));
//	if (nullptr == _array)
//	{
//		perror("malloc申请空间失败");
//		return;
//	}*/
//	_array = new T[capacity];
//	_size = 0;
//	_capacity = capacity;
//}
//
//template<class T>
//void Stack<T>:: Push(const T& data)
//{
//	// CheckCapacity();
//	_array[_size] = data;
//	_size++;
//}
//
//template<class T>
//Stack<T>::~Stack()
//{
//	if (_array)
//	{
//		free(_array);
//		_array = nullptr;
//		_capacity = 0;
//		_size = 0;
//	}
//}
//int main()
//{
//
//	Stack<int> s1;//s1存int类型
//	Stack<double> s2;//s2存double类型
//	Stack<char> s3;//s3存char类型
//	return 0;
//}