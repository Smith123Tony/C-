#pragma once

#include<iostream>
using namespace std;

class Stack
{
public:
	//��Ա����
	void Init(int defaultCapacity = 4);
	
	void Push(int x)
	{
		//����......

		a[top++] = x;
	}
	void Destroy()
	{
		free(a);
		a = nullptr;
		top = capacity;
	}
private:
	//��Ա����
	int* a;
	int top;
	int capacity;
};