#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void test1_vector()
{
	//vector<int> v1(5);
	//vector<int> v2(5, 0);

	/*vector<int> v3;
	v3.push_back(1);
	v3.push_back(2);
	v3.push_back(3);
	v3.push_back(4);*/

	/*vector<int> v4;
	for (int i = 0; i < 10; i++)
		v4.push_back(i);*/
	vector<int> v5;
	v5.push_back(1);
	v5.push_back(2);
	v5.push_back(3);
	vector<int>::iterator it = v5.begin();
	while (it != v5.end())
	{
		cout << *it << " ";
		it++;
	}
}

void test1_vector2()
{
	//利用相同类型的迭代器进行初始化
	vector<int> v1(10, 1);
	vector<int> v2(v1.begin(), v1.end());
	for (auto e : v2)
	{
		cout << e << " ";
	}
	cout << endl;

	//利用不同类型的迭代器进行初始化
	string str("hello C++");
	vector<int> v3(str.begin(), str.end());
	vector<char> v4(str.begin(), str.end());
	for(auto e : v3)
		cout << e << " ";
	cout << endl;
	for (auto e : v4)
		cout << e << " ";


	int a[] = { 1,2,3,4 };
	vector<int> v5(a, a + 4);

}

void test1_vector3()
{
	//升序
	int a[] = { 15,9,29,3,50 };
	vector<int> v(a, a + 5);
	sort(v.begin(), v.end());
	for (auto e : v)
		cout << e << " ";
	cout << endl;

	//降序
	//greater
	sort(v.begin(), v.end(), greater<int>());//使用匿名对象
	for (auto e : v)
		cout << e << " ";
	cout << endl;

	string str("hello world");
	sort(str.begin(), str.end());
	cout << str << endl;
}

void test1_vector4()
{
	/*vector<char> v1;
	cout << v1.max_size() << endl;*/

	/*vector<int> v;
	v.reserve(10);
	for (size_t i = 0; i < 10; i++)
	{
		v.push_back(i);
		cout << v[i];
	}*/

	/*vector<int> v1;
	v1.resize(10);
	for (size_t i = 0; i < 10; i++)
	{
		v1[i] = i;
	}

	for (auto e : v1)
	{
		cout << e << " ";
	}
	cout << endl;*/
}

void test1_vector5()
{
	int a[] = { 1,3,5,7,9 };
	vector<int> v(a, a + 5);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.insert(v.begin(), 100);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	v.erase(v.begin());
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test1_vector6()
{
	//查找元素
	int a[] = { 0,2,4,6,8,10,12 };
	vector<int> v(a, a + sizeof(a) / sizeof(a[0]));
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;

	vector<int>::iterator pos = find(v.begin(), v.end(), 8);
	if (pos != v.end())
		v.erase(pos);
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{

	//test1_vector();
	//test1_vector2();
	//test1_vector3();
	//test1_vector4();
	//test1_vector5();
	//test1_vector6();
	return 0;
}