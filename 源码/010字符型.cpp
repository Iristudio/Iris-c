#include<iostream>
using namespace std;

int main() {
	/*
	字符型作用的显示单个字符
	语法 char ch（变量名）= 'a';
	单引号内只能放一个字符 不可以是字符串
	在写字符型变量值时要用单引号 不要用双引号
	*/
	char ch1 = 'a';
	cout << ch1 << endl;

	//字符型变量所占内存大小
	cout<<"字符型变量所占内存空间：" << sizeof(char) << endl;

	//字符型变量常见错误 
	//char ch2 = "a"'; 单引号用成双引号
	//char ch3 = 'abcd'; 单引号内写成字符串
	
	//字符型变量所对ASCII编码
	char ch2 = 'A';
	char ch3 = 'B';

	cout << int(ch1) << endl;//a = 97 
	cout << int(ch2) << endl;//A = 65
	cout << int(ch3) << endl;//B = 66 以此类推

	system("pause");
	return 0;

}