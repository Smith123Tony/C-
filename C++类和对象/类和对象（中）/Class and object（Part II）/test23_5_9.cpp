#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stdlib.h>
using namespace std;

typedef int DataType;


//class Stack
//{
//public:
//	/*Stack()
//	{
//		cout << "Stack()" << endl;
//		_array = (DataType*)malloc(sizeof(DataType) * 4);
//		if (NULL == _array)
//		{
//			perror("mallocÉêÇë¿Õ¼äÊ§°Ü!!!");
//			return;
//		}
//		_capacity = 4;
//		_size = 0;
//	}*/
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//		_array = (DataType*)malloc(sizeof(DataType) * capacity);
//		if (NULL == _array)
//		{
//			perror("mallocÉêÇë¿Õ¼äÊ§°Ü!!!");
//			return;
//		}
//		_capacity = capacity;
//		_size = 0;
//	}
//private:
//	DataType* _array;
//	int _capacity;
//	int _size;
//};
//
//int main()
//{
//	Stack st1;
//	Stack st2(8);
//	return 0;
//}

struct TreeNode
{

	TreeNode* _left;
	TreeNode* _right;
	int _val;

	TreeNode(int val = 0)
	{
		_left = nullptr;
		_right = nullptr;
		_val = val;
	}
};

class Tree
{
private:
	TreeNode* _root = nullptr;
};
int main()
{
	Tree t1;
	TreeNode n1(1);
	TreeNode n2(2);
}