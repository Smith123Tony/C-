#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
//int main()
//{
//	string str1("hello");
//	str1.push_back(' ');
//	cout << str1 << endl;
//	str1.append("world");
//	cout << str1 << endl;
//	return 0;
//}

//int main()
//{
//	string str("hello");
//	str += ' ';
//	str += "world";
//	cout << str << endl;
//	return 0;
//}

//int main()
//{
//	//将x转换为字符串
//	int x = 0;
//	cin >> x;
//	string xstr;
//	//输入0会出现问题(什么都不会打印)
//	while (x)
//	{
//		size_t val = x % 10;
//		xstr += ('0' + val);
//		x /= 10;
//	}
//	cout << xstr; 
//	return 0;
//}

//int main()
//{
//	string s0;
//	string s1("hello world");
//	//遍历string
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		cout << s1[i] << ' ';
//	}
//	cout << endl;
//	//修改string
//	for (size_t j = 0; j < s1.size(); j++)
//	{
//		s1[j]++;
//		cout << s1[j] << ' ';
//	}
//	cout << endl;
//	return 0;
//}

//int main()
//{
//	string str1 = "hello";
//	char str2[] = "hello";
//	str1[0]++;//等价于str1.operator[](1)
//	str2[0]++;//等价于*(str2)
//	cout << str1[0] << ' ' << str2[0] << endl;
//	return 0;
//}


////迭代器
//int main()
//{
//	string str("hello world");
//	string::iterator it = str.begin();
//	while (it != str.end())
//	{
//		(*it)--;
//		it++;
//	}
//	it = str.begin();
//	while (it != str.end())
//	{
//		cout << *it << ' ';
//		it++;
//	}
//	cout << endl;
//	return 0;
//}


////范围for(底层就是一个迭代器)
//int main()
//{
//	string str("hello world");
//	string::iterator it = str.begin();
//	while (it != str.end())
//	{
//		cout << *it;
//		it++;
//	}
//	cout << endl;
//	for (auto& ch : str)
//	{
//		ch++;
//	}
//	for (char ch : str)
//	{
//		cout << ch;
//	}
//	cout << endl;
//	return 0;
//}

//任何容器都支持迭代器
//int main()
//{
//	list<int> lt;
//	lt.push_back(520);
//	lt.push_back(521);
//	lt.push_back(522);
//	lt.push_back(523);
//	
//	list<int>::iterator lit = lt.begin();
//	while (lit != lt.end())
//	{
//		cout << *lit << ' ';
//		lit++;
//	}
//	cout << endl;
//	reverse(lt.begin(), lt.end());//迭代器可以更好的跟算法相结合
//	for (auto e : lt)
//	{
//		cout << e << ' ';
//	}
//	cout << endl;
//	return 0;
//}

//void func(const string& s)
//{
//	string::const_iterator it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it;
//		it++;
//	}
//	cout << endl;
//
//	//string::const_reverse_iterator rit = s.rbegin();
//	auto rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		cout << *rit << ' ';
//		rit++;
//	}
//	cout << endl;
//}

//int main()
//{
//	string str("hello world");
//	//string::reverse_iterator rit = str.rbegin();
//	auto rit = str.rbegin();
//	while (rit != str.rend())
//	{
//		*rit += 3;
//		cout << *rit << ' ';
//		rit++;
//	}
//	cout << endl;
//	cout << str << endl;
//	return 0;
//}

//int main()
//{
//	string str("hello world");
//	cout << str.size() << endl;
//	return 0;
//}

//int main()
//{
//	string str("hello world");
//	cout << str.capacity() << endl;
//	size_t old = str.capacity();
//	for (int i = 0; i < 100; i++)
//	{
//		str += 'x';
//		if (old != str.capacity())
//		{
//			cout << "容量:" << str.capacity() << endl;
//			old = str.capacity();
//		}
//	}
//	return 0;
//}