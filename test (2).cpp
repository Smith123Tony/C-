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
//			cout << "num1���" << endl;
//		else
//		{
//			cout << "num3���" << endl;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//			cout << "num2���" << endl;
//		else
//		{
//			cout << "num3���" << endl;
//		}
//	}
//	return 0;
//}

//��Ŀ�����
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

//����Ԫ������
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

////ð������
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
//	//��������
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
//	//��ӡ����֮�������
//	for (i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " " ;
//	}
//	cout << endl;
//	return 0;
//}

//��ϰ��ά����
//#include<iostream>
//#include<string.h>
//using namespace std;
//int main()
//{
//	string name[3] = { "����","����","����" };
//	int arr[3][3] = {
//		{100,80,90},
//		{60,80,70},
//		{60,50,90}
//	};
//	//������˵�ƽ���ɼ�
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 0; j < 3; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << name[i] << "��ƽ���ɼ�Ϊ" << sum / 3;
//		cout << endl;
//	}
//	return 0;
//}


////��ָ�����������ʵ�
//int *p= NULL:
//*p = 100;


////const����ָ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	const int* p = &a;
//	//1.ָ��ָ���ֵ�����Ը�
//	//*p=20;����
//	//p=&b;��ȷ
//
//	//2.ָ�����γ���   ָ�볣��
//	int* const p2 = &a;
//	//*p2 = 30;//��ȷ
//	//p2 = &b;//����(��Ϊָ���ָ�򲻿��Ը���)
//
//	//3.const����ָ��ͳ���
//	const int* const p3 = &a;
//	//ָ���ָ���ָ��ָ���ֵ�������Ը�
//	//*p3 = 100;//����
//	//p3 = &b;//����
//	return 0;
//}