#include<iostream>
using namespace std;

int main() {
	/*
	�ַ������õ���ʾ�����ַ�
	�﷨ char ch����������= 'a';
	��������ֻ�ܷ�һ���ַ� ���������ַ���
	��д�ַ��ͱ���ֵʱҪ�õ����� ��Ҫ��˫����
	*/
	char ch1 = 'a';
	cout << ch1 << endl;

	//�ַ��ͱ�����ռ�ڴ��С
	cout<<"�ַ��ͱ�����ռ�ڴ�ռ䣺" << sizeof(char) << endl;

	//�ַ��ͱ����������� 
	//char ch2 = "a"'; �������ó�˫����
	//char ch3 = 'abcd'; ��������д���ַ���
	
	//�ַ��ͱ�������ASCII����
	char ch2 = 'A';
	char ch3 = 'B';

	cout << int(ch1) << endl;//a = 97 
	cout << int(ch2) << endl;//A = 65
	cout << int(ch3) << endl;//B = 66 �Դ�����

	system("pause");
	return 0;

}