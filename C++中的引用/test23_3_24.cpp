#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int& b = a;
//	b = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	return 0;
//}


////引用的注意事项
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int &c;这种写法是错误的，因为引用必须进行初始化
//	int& c = a;//引用一但初始化，就不可以更改
//	c = b;//这是赋值操作，并不是更改利用,这句话的意思是把20赋值给c所指向的那块内存，
//	//由于c是a的引用，所以a的内容也会跟着一起改变
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//	return 0;
//}


////引用做函数参数
//#include<iostream>
//using namespace std;
//
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(a, b);
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//	return 0;
//}

////不要返回局部变量的引用
//#include<iostream>
//using namespace std;
//
//int& test1()
//{
//	int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& ret = test1();
//	cout << "ret= " << ret << endl;
//	return 0;
//}

////函数的调用可以作为左值
//#include<iostream>
//using namespace std;
//
//int& test2()
//{
//	static int a = 10;
//	return a;
//}
//
//int main()
//{
//	int& ret2 = test2();
//	cout << "ret2 = " << ret2 << endl;
//	test2() = 1000;//如果函数的返回值是引用，这个函数调用可以作为左值
//	cout << "ret2 = " << ret2 << endl;
//	return 0;
//}


////引用的本质
//#include<iostream>
//using namespace std;
//
//void fun(int& ret)
//{
//	ret = 200;
//	//由于ret是引用，所以会自动转换为*ret=200
//}
//
//int main()
//{
//	int a = 10;
//
//	int& ret = a;
//	//自动转换为int* const ref = &a;
//	//指针常量就是指针的指向不可以进行更改，这也就是为什么引用一旦进行初始化就不可以进行过更改
//
//	ret = 20;//内部发现ret是引用，内部会自动转换为*ret=20
//
//	cout << "a = " << a << endl;
//	cout << "ret = " << ret << endl;
//
//	fun(a);
//
//	cout << "a = " << a << endl;
//	cout << "ret = " << ret << endl;
//
//	return 0;
//}