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
	//cout << "输入内容到文件：" << endl;
	//cout << "输入姓名：";
	//cin >> data;
	////向文件写入用户输入的数据
	//outfile << data<<endl;

	//cout << "输入年龄：";
	//cin >> data;
	////再次向文件写入用户输入的数据
	//outfile << data << endl;

	////关闭文件outfile
	//outfile.close();

	////以读模式打开文件

	//ifstream infile;
	//infile.open("outfile.txt",ios::in);

	//cout << "从文件输出内容：" << endl;
	//cout << "输出姓名：";
	//
	////从文件输出内容到data
	//infile.seekg( ios::beg);
	//infile >> data;
	//cout << data << endl;

	//cout << "输出年龄：";

	////再次从文件输出内容到data
	//infile >> data;
	//cout << data << endl;
	//
	////关闭文件infile
	//infile.close();


	////基于当前系统的当前日期/时间
	//time_t now = time(NULL);

	//cout << "1970 到目前经过秒数:" << now << endl;

	//char *buffer = new char[100];
	//size_t size = 26;

	////把 now 转换为字符串形式
	//ctime_s(buffer,size,&now);

	//cout << "本地日期和时间：" << buffer << endl;

	//time_t *now_s = new time_t();
	//
	//cout << difftime(now, *now_s) << endl;

	//cout << "本地日期和时间：" << buffer << endl;

	//tm* ltm = new tm();

	////时间格式化为tm形式
	//localtime_s(ltm, &now);

	////输出 tm 结构的各个组成部分
	//cout << "年: " << 1900 + ltm->tm_year << endl;
	//cout << "月: " << 1 + ltm->tm_mon << endl;
	//cout << "日: " << ltm->tm_mday << endl;
	//cout << "时间: " << ltm->tm_hour << ":";
	//cout << ltm->tm_min << ":";
	//cout << ltm->tm_sec << endl;

	/*typedef enum { boy = 1, girl } sex;
	sex sex1 = boy;
	printf("%d\n",sex1);*/

	////多级typedef声明
	//typedef int feet;
	//typedef feet distance;
	//distance ds1;
	//ds1 = 12;
	//cout << ds1 << endl;

	////回忆const关键字
	//const int a = 5;
	//cout << a << endl;
	//int b = 6;
	///*单个const 修饰指针类型：前两种方式等价：
	//（修饰变量的值，故值不可赋值改变可通过地址修改值）const int*和int const*，
	//（修饰变量地址，故不可通过地址去改变值但可直接赋值改变其值）int* const区别于前两种;
	//三种最终都把指针指向地址的值修改，导致原变量值得到修改*/
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
	//*f = 5;/*简介修改b的值*/
	//cout << *f << endl;

	///*结合前面两种的特性形成的第三种：
	//（既不能通过赋值修改值亦不可通过地址修改其值）const int* const p；*/
	//const int* const p = &b;
	//int const* const q = &b;
	//cout << *p << endl;
	//cout << *q << endl;


	//const int fun(void);
	//cout << fun() << endl;
	//char str1[4] = {"cba"};
	//const char* str = "abc";//C语言代码char* str = "abc";在C++里面不可用，类似于const char* str  = "abc";
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

	//int n[10]; // n 是一个包含 10 个整数的数组

 //  // 初始化数组元素          
	//for (int i = 0; i < 10; i++)
	//{
	//	n[i] = i + 100; // 设置元素 i 为 i + 100
	//}
	//cout << "Element" << setw(13) << "Value" << endl;//setw(int)格式化输出，其中字节数为int型

	//// 输出数组中每个元素的值                     
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
	//string y = str1;/*字符数组类型转换成字符串类型可直接赋值*/
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