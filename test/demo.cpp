#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<ctime>
#include<windows.h>
#include<thread>
#include<iomanip>
#include<string>
#include<vector>
#include<list>
//#include<ctime>
using namespace std;

int main()
{
		const int N = 1000;
		char str[N] = { '\0' }, str1[N] = { '\0' };
		scanf_s("%s  %s", str, str1);
		return strcmp(str, str1);
	//ofstream outfile;
	//outfile.open("outfile.txt", ios::app | ios::out);
	//string data;
	//cout << "�������ݵ��ļ���" << endl;
	//cout << "����������";
	//cin >> data;
	////���ļ�д���û����������
	//outfile << data<<endl;

	//cout << "�������䣺";
	//cin >> data;
	////�ٴ����ļ�д���û����������
	//outfile << data << endl;

	////�ر��ļ�outfile
	//outfile.close();

	////�Զ�ģʽ���ļ�

	//ifstream infile;
	//infile.open("outfile.txt",ios::in);

	//cout << "���ļ�������ݣ�" << endl;
	//cout << "���������";
	//
	////���ļ�������ݵ�data
	//infile.seekg( ios::beg);
	//infile >> data;
	//cout << data << endl;

	//cout << "������䣺";

	////�ٴδ��ļ�������ݵ�data
	//infile >> data;
	//cout << data << endl;
	//
	////�ر��ļ�infile
	//infile.close();


	////���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	//time_t now = time(NULL);

	//cout << "1970 ��Ŀǰ��������:" << now << endl;

	//char *buffer = new char[100];
	//size_t size = 26;

	////�� now ת��Ϊ�ַ�����ʽ
	//ctime_s(buffer,size,&now);

	//cout << "�������ں�ʱ�䣺" << buffer << endl;

	//time_t *now_s = new time_t();
	//
	//cout << difftime(now, *now_s) << endl;

	//cout << "�������ں�ʱ�䣺" << buffer << endl;

	//tm* ltm = new tm();

	////ʱ���ʽ��Ϊtm��ʽ
	//localtime_s(ltm, &now);

	////��� tm �ṹ�ĸ�����ɲ���
	//cout << "��: " << 1900 + ltm->tm_year << endl;
	//cout << "��: " << 1 + ltm->tm_mon << endl;
	//cout << "��: " << ltm->tm_mday << endl;
	//cout << "ʱ��: " << ltm->tm_hour << ":";
	//cout << ltm->tm_min << ":";
	//cout << ltm->tm_sec << endl;

	/*typedef enum { boy = 1, girl } sex;
	sex sex1 = boy;
	printf("%d\n",sex1);*/

	////�༶typedef����
	//typedef int feet;
	//typedef feet distance;
	//distance ds1;
	//ds1 = 12;
	//cout << ds1 << endl;

	////����const�ؼ���
	//const int a = 5;
	//cout << a << endl;
	//int b = 6;
	///*����const ����ָ�����ͣ�ǰ���ַ�ʽ�ȼۣ�
	//�����α�����ֵ����ֵ���ɸ�ֵ�ı��ͨ����ַ�޸�ֵ��const int*��int const*��
	//�����α�����ַ���ʲ���ͨ����ַȥ�ı�ֵ����ֱ�Ӹ�ֵ�ı���ֵ��int* const������ǰ����;
	//�������ն���ָ��ָ���ַ��ֵ�޸ģ�����ԭ����ֵ�õ��޸�*/
	//const int* c = &b;
	//int d = 7;
	//cout << *c << endl;
	//c = &d;
	//cout << *c << endl;
	//int const* e = &b;
	//cout << *e << endl;
	//e = &d;
	//cout << *e << endl;
	////
	//int* const f = &b;
	//cout << *f << endl;
	//*f = 5;/*����޸�b��ֵ*/
	//cout << *f << endl;

	///*���ǰ�����ֵ������γɵĵ����֣�
	//���Ȳ���ͨ����ֵ�޸�ֵ�಻��ͨ����ַ�޸���ֵ��const int* const p��*/
	//const int* const p = &b;
	//int const* const q = &b;
	//cout << *p << endl;
	//cout << *q << endl;


	//const int fun(void);
	//cout << fun() << endl;
	//char str1[4] = {"cba"};
	//const char* str = "abc";//C���Դ���char* str = "abc";��C++���治���ã�������const char* str  = "abc";
	//cout << str << endl;
	//str = str1;
	//cout << str << endl;

	//int x = 2, y = 20;
	//int z = x & y;
	//cout << z << endl;
	//z = x | y;
	//cout << z << endl;
	//z = ~x;
	//cout << z << endl;
	//z = x ^ y;
	//cout << z << endl;

	//int n[10]; // n ��һ������ 10 ������������

 //  // ��ʼ������Ԫ��          
	//for (int i = 0; i < 10; i++)
	//{
	//	n[i] = i + 100; // ����Ԫ�� i Ϊ i + 100
	//}
	//cout << "Element" << setw(13) << "Value" << endl;//setw(int)��ʽ������������ֽ���Ϊint��

	//// ���������ÿ��Ԫ�ص�ֵ                     
	//for (int j = 0; j < 10; j++)
	//{
	//	cout << setw(7) << j << setw(13) << n[j] << endl;
	//}

	//string x = "we are ";
	//char str1[10] = "family";
	//char str2[10] = { '!','!','!','\0' }, str3[10];
	//strcpy_s(str3, str2);
	//cout << str2 <<"\t"<< str3 << endl;
	//strcat_s(str1,str2);
	//cout << str1 << endl;
	//string y = str1;/*�ַ���������ת�����ַ������Ϳ�ֱ�Ӹ�ֵ*/
	//string z = x + y;
	//cout << z << endl;

	/*char * p;
	int n = 0;
	cin >> n;
	char *str = new char[n];
	p = str;
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << str[i] << '\t';
	}*/

	system("pause");
	return 0;
}

//const int fun(void)
//{
//	return 0;
//}