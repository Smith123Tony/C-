#pragma once

#include<iostream>
using namespace std;

class Stack
{
public:
	//成员函数
	void Init(int defaultCapacity = 4);
	
	void Push(int x)
	{
		//扩容......

		a[top++] = x;
	}
	void Destroy()
	{
		free(a);
		a = nullptr;
		top = capacity;
	}
private:
	//成员变量
	int* a;
	int top;
	int capacity;
};