#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	auto c = a;
//	auto d = 10 + 1.2;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	return 0;
//}

//#include<map>
//#include<string>
//#include<vector>
//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	//vector<int>::iterator it = v.begin();//vector<int>::iterator是一个类型，可以看到类型很长
//	auto it = v.begin();//我们这里可以用auto关键字直接自动推导出前面的类型vector<int>::iterator
//
//	std::map<std::string, std::string> dict;
//	std::map<std::string, std::string>::iterator dit = dict.begin();
//	//std::map<std::string, std::string>::iterator是一个类型
//	//我们直接用auto来进行推导，即定价于下面这种写法
//	auto dit = dict.begin();
//
//	//auto a;//该行代码错误，不能直接进行推导
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	//auto a = 100, b = 200;//改行代码正确
//	//auto c = 300, d = 4.4;//改行代码错误，因为c和d的初始化表达式类型不同
//
//
//	int a[] = { 1,2,3 };
//	//auto b[] = { 4,5,6 };//auto不能直接用来声明数组
//	return 0;
//}

////范围for
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//只要是数组都可以
//	//依次取数组中的数据赋值给e，自动迭代，自动判断结束
//	for (int& e : a)
//	{
//		e *= 2;
//	}
//	for (int e : a)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}


//这里出现的问题就是for循环的范围不是明确确定的
//void TestFor(int arr[])
//{
//	for (auto& e : arr)
//	{
//		cout << e << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//
//	auto x = &a;
//	auto* y = &a;//指定y必须是指针
//	auto& z = a;
//
//	cout << typeid(x).name() << endl;
//	cout << typeid(y).name() << endl;
//	cout << typeid(z).name() << endl;
//
//	*x = 1000;
//	*y = 2000;
//	z = 10000;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
//int main()
//{
//	f(0);
//	f(NULL);
//	f((int*)(0));
//	f(nullptr);
//	return 0;
//}