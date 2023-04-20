#define _CRT_SECURE_NO_WARNINGS 1

#include"Stack.h"

void StackInit(struct Stack* pst, int defaultCapacity)
{
	pst->a = (int*)malloc(sizeof(int) * 4);
	if (pst->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	pst->top = 0;
	pst->capacity = defaultCapacity;
}