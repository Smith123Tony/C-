#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//int main()
//{
//	string s1;//չ���������ռ��������ʹ��
//	std::string s2;//û��չ�������ռ������ʹ�þͿ���
//
//	std::string name("����");
//	name = "����";
//	return 0;
//}

//int main()
//{
//	string s1;
//	string s2("С��");
//	string s3(10, '*');
//	string s4(s2);//��������
//	return 0;
//}

//int main()
//{
//	string s1;
//	string s2("hello linux");
//	string s3(s2, 6, 5);
//	/*cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;*/
//	cout << (s1 > s2) << endl;
//	cout << (s1 == s2) << endl;
//	cout << (s2 == s3) << endl;
//	cout << (s2 > s3) << endl;
//
//	//npos��
//	size_t npos = -1;
//	cout << "npos:" << npos;
//	return 0;
//}

//int main()
//{
//	size_t npos = -1;
//	string s1("hello world");
//	string s2(s1, 6, npos);
//	string s3(s1, 6, 100);
//	cout << "npos:" << npos << endl;
//	cout << "s2:" << s2 << endl;
//	cout << "s3:" << s3 << endl;
//	return 0;
//}

//int main()
//{
//	string ur1("https://cplusplus.com/reference/string/string/string/");
//	string sub1(ur1, 0, 5);
//	string sub2(ur1, 8, 13);
//	string sub3(ur1, 22);
//	cout << sub1 << endl;
//	cout << sub2 << endl;
//	cout << sub3 << endl;
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	string s2("hello linux");
//	s1 = s2;
//	cout << s1 << endl;
//
//	s1 = "1111";
//	cout << s1 << endl;
//	
//	s1 = '1';
//	cout << s1 << endl;
//	return 0;
//}

//int main()
//{
//	string s1("hello world");
//	s1.push_back('!');
//	cout << s1 << endl;
//	s1.append(" linux");
//	cout << s1 << endl;
//	return 0;
//}

//int main()
//{
//	string s1;
//	s1 += 'h';
//	cout << s1 << endl;
//	s1 += "ello world";
//	cout << s1 << endl;
//	return 0;
//}

//int main()
//{
//	size_t x = 0;
//	cin >> x;
//
//	string xstr;
//
//	//Ҫ��xת����string����
//	while (x)
//	{
//		size_t val = x % 10;
//		xstr += ('0' + val);
//		x /= 10;
//	}
//	cout << xstr << endl;
//
//	//��xstr��������
//	return 0;
//}