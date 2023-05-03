#define _CRT_SECURE_NO_WARNINGS 1

#include"Func.h"



void Stack::Init(int defaultCapacity)
{
	a = (int*)malloc(sizeof(int) * capacity);
	if (a == nullptr)
	{
		cout << "mallocÉêÇë¿Õ¼äÊ§°Ü" << endl;
		return;
	}
	capacity = defaultCapacity;
	top = 0;
}