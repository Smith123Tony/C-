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


////���õ�ע������
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int &c;����д���Ǵ���ģ���Ϊ���ñ�����г�ʼ��
//	int& c = a;//����һ����ʼ�����Ͳ����Ը���
//	c = b;//���Ǹ�ֵ�����������Ǹ�������,��仰����˼�ǰ�20��ֵ��c��ָ����ǿ��ڴ棬
//	//����c��a�����ã�����a������Ҳ�����һ��ı�
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//	return 0;
//}


////��������������
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

////��Ҫ���ؾֲ�����������
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

////�����ĵ��ÿ�����Ϊ��ֵ
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
//	test2() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//	cout << "ret2 = " << ret2 << endl;
//	return 0;
//}


////���õı���
//#include<iostream>
//using namespace std;
//
//void fun(int& ret)
//{
//	ret = 200;
//	//����ret�����ã����Ի��Զ�ת��Ϊ*ret=200
//}
//
//int main()
//{
//	int a = 10;
//
//	int& ret = a;
//	//�Զ�ת��Ϊint* const ref = &a;
//	//ָ�볣������ָ���ָ�򲻿��Խ��и��ģ���Ҳ����Ϊʲô����һ�����г�ʼ���Ͳ����Խ��й�����
//
//	ret = 20;//�ڲ�����ret�����ã��ڲ����Զ�ת��Ϊ*ret=20
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