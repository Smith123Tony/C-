#define _CRT_SECURE_NO_WARNINGS 1
//实现相对完整的日期类
#include"Date.h"
void TestDate1()
{
	Date da1(23, 5, 20);
	da1 += 100;
	da1.Print();

	Date da2(23, 5, 20);
	Date da3(da2 + 100);
	da2.Print();
	da3.Print();

	//用一个已经存在的对象初始化另一个对象，即拷贝构造函数
	//拷贝构造的意义就是赋值初始化
	Date da4 = da2;//等价于Date da4(da2);//均为拷贝构造函数，是等价的

	//而赋值重载的意义纯粹的就是拷贝
	//已经存在的两个对象之间进行复制拷贝,即运算符重载函数
	da4 = da1;
}

void TestDate2()
{
	Date da1(2021, 5, 21);
	//无论前置还是后置++都需要++
	//前置++就返回++以后的对象，后置++就返回++之前的对象

	//编译器这里成全一个同时委屈一个,为了区分这里的重载
	++da1;//da1.operator++()
	da1++;//da1.operator++(0)
	Date da2(2024, 5, 20);
	Date da3(2023, 3, 14);

	bool ret1 = da2 < da3;//自定义类型转换为对应的函数
	int i = 0, j = 2;
	bool ret2 = i < j;//内置类型编译器知道怎么比较，故编译器会自动处理内置类型的重载
}

//测试日期类的-=
void TestDate3()
{
	Date da1(2023, 5, 20);
	da1 -= 50;
	da1.Print();

	Date da2(2023, 5, 21);
	da2 -= 88;
	da2.Print();

	Date da3(2023, 5, 25);
	da3 -= 100;
	da3.Print();

	Date da4(2024, 5, 20);
	da4 -= 10000;
	da4.Print();
}

void TestDate4()
{
	Date d1(2020, 5, 20);
	d1 += 100;
	d1.Print();

	Date da2(2023, 5, 21);
	da2 += -100;
	da2.Print();

	Date da3(2023, 5, 5);
	da3 -= -100;
	da3.Print();
}

void TestDate5()
{
	Date da1(2023, 5, 5);
	Date ret1 = da1--;//调用da1.operator(&da1,0);
	ret1.Print();
	da1.Print();

	Date da2(2023, 5, 5);
	Date ret2 = --da2;//调用da1.operator++(&da1);
	ret2.Print();
	da2.Print();
}

void TestDate6()
{
	Date da1(2023, 5, 20);
	Date da2(2022, 5, 21);
	Date da3(1949, 10, 1);
	Date da4(2023, 5, 20);
	cout << da1 - da2 << endl;
	cout << da2 - da1 << endl;
	cout << da3 - da4 << endl;
	cout << da4 - da3 << endl;
}

void TestDate7()
{
	Date da1(2023, 5, 20);
	da1 += 100;
	
	//流插入
	cout << da1;//operator<<(cout,da1);

	Date da2(2020, 1, 23);
	Date da3(2020, 5, 21);
	cout << da2 << da3 << da1;//从左往右执行

	cin >> da1 >> da2;//从左往右执行
	cout << da1 << da2;
}

void TestDate8()
{
	Date da1(23, 5, 20);
	da1.Print();

	const Date da2(22, 5, 20);
	da2.Print();

	da1 + 100;
	da2 + 100;

	da1 < da2;
	da2 < da1;
}


//int main()
//{
//	//TestDate1();
//	//TestDate2();
//	//TestDate3();
//	//TestDate4();
//	//TestDate5();
//	//TestDate6();
//	//TestDate7();
//	//TestDate8();
//	return 0;
//}