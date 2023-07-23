#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
#include<list>
using namespace std;


void test_list1()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_front(0);
	lt.push_front(-1);
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//在第5个位置插入数据
	list<int>::iterator it = lt.begin();
	for (size_t i = 0; i < 4; i++)
	{
		it++;
	}
	lt.insert(it, 10);
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//查找3，在3的那个位置插入30
	it = find(lt.begin(), lt.end(), 3);
	if (it != lt.end())
	{
		//这里insert之后，迭代器it并不会失效
		lt.insert(it, 30);
		*it *= 100;
	}
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	it = find(lt.begin(), lt.end(), 2);
	if (it != lt.end())
	{
		lt.erase(it);

		//由于insert之后节点不存在了，所以迭代器it会失效失效
		//*it *= 100;
		
	}
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//删除所有的偶数
	it = lt.begin();
	while (it != lt.end())
	{
		if (*it % 2 == 0)
		{
			it = lt.erase(it);
		}
		else
		{
			it++;
		}
	}
	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list2()
{
	//在第三个位置插入10
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);
	list<int>::iterator it = lt1.begin();
	for (size_t i = 0; i < 2; i++)
	{
		it++;
	}
	lt1.insert(it, 10);
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;
}

//查找和修改
void test_list3()
{
	//在链表中查找3，如果查找成功，将该位置的数据*10
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;

	list<int>::iterator it = lt1.begin();
	it = find(lt1.begin(), lt1.end(), 3);
	//判断是否查找成功
	if (it != lt1.end())
	{
		*it *= 10;
	}
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list4()
{
	//删除第三个位置的节点
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;

	list<int>::iterator it = lt1.begin();
	it = find(lt1.begin(), lt1.end(), 3);
	//判断是否查找成功
	if (it != lt1.end())
	{
		lt1.erase(it);

		//erase()之后，it迭代器失效
		//*it *= 10;
	}
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list5()
{
	list<int> lt1;
	lt1.push_back(1);
	lt1.push_back(2);
	lt1.push_back(3);
	lt1.push_back(4);

	list<int>::iterator it = lt1.begin();
	while (it != lt1.end())
	{
		if (*it % 2 == 0)
		{
			it = lt1.erase(it);
		}
		else
		{
			it++;
		}
	}
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list6()
{
	////排序
	//list<int> lt = { 12,56,2,95,35,78,47 };
	//lt.sort();
	//for (auto e : lt)
	//{
	//	cout << e << " ";
	//}
	//cout << endl;

	list<int> lt1 = { 12,56,2,95,35,78,47 };
	lt1.remove(560);
	for (auto e : lt1)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list7()
{
	//splice用法介绍
	list<int> lt1 = { 1,2,3,4 };
	list<int> lt2 = { 10,20,30,40 };

	list<int> lt3 = { 1,2,3,4 };
	list<int> lt4 = { 10,20,30,40 };

	list<int> lt5 = { 1,2,3,4 };
	list<int> lt6 = { 10,20,30,40 };

	// 将lt2中的所有元素移动到lt1的末尾
	lt1.splice(lt1.end(), lt2);
	for (auto e : lt1)
		cout << e << " ";
	cout << endl;

	// 将lt4中的第二个元素移动到lt3的开头
	auto it3 = lt3.begin();
	auto it4 = lt4.begin();
	it4++;
	lt3.splice(it3, lt4, it4);
	for (auto e : lt3)
		cout << e << " ";
	cout << endl;

	//将lt6中的20 30 40移动到lt5的最后位置
	auto first = ++lt6.begin();
	auto end = lt6.end();
	lt5.splice(lt5.end(), lt6, first, end);
	for (auto e : lt5)
		cout << e << " ";
	cout << endl;
}

void test_list8()
{
	list<int> lt1 = { 1,2,3,4,5 };

	for (auto it = lt1.begin(); it != lt1.end(); it++)
	{
		(*it)++;
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	//test_list1();
	//test_list2();
	//test_list3();
	//test_list4();
	//test_list5();
	//test_list6();
	//test_list7();
	//test_list8();
	return 0;
}