#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//
//	cin >> num1 >> num2 >> num3;
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//			cout << "num1最大" << endl;
//		else
//		{
//			cout << "num3最大" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//			cout << "num2最大" << endl;
//		else
//		{
//			cout << "num3最大" << endl;
//		}
//	}
//	return 0;
//}

//三目运算符
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret=(a > b ? a : b);
//	cout << "ret=" << ret << endl;
//	return 0;
//}

//数组元素逆序
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "\n";
//	int start = 0;
//	int end = (sizeof(arr) / sizeof(arr[0])) - 1;
//	while (start < end)
//	{
//		int tmp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = tmp;
//		start++;
//		end--;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//	cout << "\n";
//	return 0;
//}

////冒泡排序
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cin >> arr[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	//处理数据
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//打印排序之后的数据
//	for (i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " " ;
//	}
//	cout << endl;
//	return 0;
//}

//练习二维数组
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	string name[3] = { "张三","李四","王五" };
//	int arr[3][3] = {
//		{100,80,90},
//		{60,80,70},
//		{60,50,90}
//	};
//	//输出三人的平均成绩
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << name[i] << "的平均成绩为" << sum / 3;
//		cout << endl;
//	}
//	return 0;
//}


////空指针是允许被访问的
//int *p= NULL:
//*p = 100;


////const修饰指针
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	const int* p = &a;
//	//1.指针指向的值不可以改
//	//*p=20;错误
//	//p=&b;正确
//
//	//2.指针修饰常量   指针常量
//	int* const p2 = &a;
//	//*p2 = 30;//正确
//	//p2 = &b;//错误(因为指针的指向不可以更改)
//
//	//3.const修饰指针和常量
//	const int* const p3 = &a;
//	//指针的指向和指针指向的值都不可以改
//	//*p3 = 100;//错误
//	//p3 = &b;//错误
//	return 0;
//}