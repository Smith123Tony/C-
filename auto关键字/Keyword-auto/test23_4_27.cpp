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
//	//vector<int>::iterator it = v.begin();//vector<int>::iterator��һ�����ͣ����Կ������ͺܳ�
//	auto it = v.begin();//�������������auto�ؼ���ֱ���Զ��Ƶ���ǰ�������vector<int>::iterator
//
//	std::map<std::string, std::string> dict;
//	std::map<std::string, std::string>::iterator dit = dict.begin();
//	//std::map<std::string, std::string>::iterator��һ������
//	//����ֱ����auto�������Ƶ�������������������д��
//	auto dit = dict.begin();
//
//	//auto a;//���д�����󣬲���ֱ�ӽ����Ƶ�
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	//auto a = 100, b = 200;//���д�����ȷ
//	//auto c = 300, d = 4.4;//���д��������Ϊc��d�ĳ�ʼ�����ʽ���Ͳ�ͬ
//
//
//	int a[] = { 1,2,3 };
//	//auto b[] = { 4,5,6 };//auto����ֱ��������������
//	return 0;
//}

////��Χfor
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ֻҪ�����鶼����
//	//����ȡ�����е����ݸ�ֵ��e���Զ��������Զ��жϽ���
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


//������ֵ��������forѭ���ķ�Χ������ȷȷ����
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
//	auto* y = &a;//ָ��y������ָ��
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