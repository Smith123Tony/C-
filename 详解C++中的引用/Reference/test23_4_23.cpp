#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//void Swap(int& m, int& n)
//{
//	int tmp = m;
//	m = n;
//	n = tmp;
//}
//int main()
//{
//	/*int a = 10;
//	int& b = a;
//	int& c = b;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;*/
//
//	int a = 10;
//	int b = 20;
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	Swap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	return 0;
//}

//void Swap(int*& p1, int*& p2)
//{
//	int* tmp = p1;
//	p1 = p2;
//	p2 = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	cout << "&a=" << pa << endl;
//	cout << "&b=" << pb << endl;
//	cout << endl;
//	Swap(pa, pb);
//	cout << "&a=" << pa << endl;
//	cout << "&b=" << pb << endl;
//	return 0;
//}


////����������ֵ�еĴ�ֵ����
//int& fun()
//{
//	int n = 0;
//	n++;
//	return n;
//}
//
//int main()
//{
//	int ret = fun();
//	cout << "ret=" << ret << endl;
//	return 0;
//}

//int& fun(int x)
//{
//	int n = x;
//	n++;
//	return n;
//}
//
//int main()
//{
//	int& ret = fun(10);
//	cout << "ret=" << ret << endl;
//
//	rand();
//	cout << "ret=" << ret << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	//�����ԣ����ù����У�Ȩ�޲����ԷŴ�
//	const int a = 10;
//	//int& b = a;
//
//	//�����ǿ��Եģ������ƺ�c������d����û�зŴ��׼1��СȨ��
//	const int c = 20;
//	int d = c;
//
//	//�����ǲ����Եģ���Ϊ���ù����֣�Ȩ�޿���ƽ�ƻ�����С
//	int x = 100;
//	int& y = x;
//	const int& z = x;
//	x++;
//	return 0;
//}


////������
//#include<iostream>
//using namespace std;
//int main()
//{
//	//const int a = 10;
//	//int& b = a;//���ù�����Ȩ�޲����ԷŴ�
//
//	//int x = 10;//���ù�����Ȩ�޿���ƽ�ƻ�����С
//	//int& a = x;//���������ù�����Ȩ�޵�ƽ��
//	//const int& b = x;//���������ù�����Ȩ�޵���С����С�Ĳ����Ǳ���x��Ȩ�ޣ�������С������b��Ϊ������Ȩ��
//	//x++;
//
//	//const int& m = 10;
//
//	//double a = 1.23;//������ʽ����ת��
//	//int b = a;
//	//const int& c = a;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int func1()
//{
//	static int x = 0;
//	return x;
//}
//
//int& func2()
//{
//	static int x = 0;
//	return x;
//}
//
//int main()
//{
//	//const int& ret1 = func1();
//
//	
//	int& ret2 = func2();//Ȩ�޵�ƽ��
//	const int& rret2 = func2();//Ȩ�޵���С
//	return 0;
//}


#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	double j = 1.2;
	if (j > i)
	{
		cout << "hello world!" << endl;
	}
	return 0;
}










