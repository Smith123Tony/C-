#define _CRT_SECURE_NO_WARNINGS 1

#include"Func.h"



void Stack::Init(int defaultCapacity)
{
	a = (int*)malloc(sizeof(int) * capacity);
	if (a == nullptr)
	{
		cout << "malloc����ռ�ʧ��" << endl;
		return;
	}
	capacity = defaultCapacity;
	top = 0;
}