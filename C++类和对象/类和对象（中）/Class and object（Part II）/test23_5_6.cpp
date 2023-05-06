#define _CRT_SECURE_NO_WARNINGS 1
//Class and object (Part II)

#include<iostream>
using namespace std;


//����class Date{};

////���캯��
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


//���캯��������
typedef int DataType;
class Stack
{
public:
	//���캯��
	Stack(int capacity = 4)
	{
		_array = (DataType*)malloc(sizeof(DataType) * capacity);
		if (NULL == _array)
		{
			perror("malloc����ռ�ʧ��!!!");
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
			perror("malloc����ռ�ʧ��!!!");
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
	//��������
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
				perror("realloc����ռ�ʧ��!!!");
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
//	Stack s(a, n);//����ʵ����ʱ���������Զ����ù��캯��
//	//s.Init();
//	cout << s.Top() << endl;
//	cout << s.Size() << endl;
//	s.Pop();
//	s.Pop();
//	cout << s.Top() << endl;
//	cout << s.Size() << endl;
//	//s.Destroy();//���������Զ�������������
//	return 0;
//}


class Date
{
public:
	//C++��֧��ȫȱʡ���߰�ȱʡ����ȻC++Ҳ֧�ֺ������أ�
	//�﷨���޲εĺ�ȫȱʡ�ĺ��������ǿ���ͬʱ���ڵģ���Ȼ�ǹ��ɺ�������
	//�����޲ε��û�������壬��Ϊ��������֪�����׵����ĸ�
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
	//��������
	//C++11֧�֣����ﲢ���ǳ�ʼ��������ֻ����������û�п��ٿռ䣩
	//���������ֵ��Ĭ�ϵ�ȱʡֵ���Ǹ����������ɵ�Ĭ�Ϲ��캯���õ�
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