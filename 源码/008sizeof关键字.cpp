#include<iostream>
using namespace std;

int main(){
//sizeof()�ؼ��ֿ���ͳ������������ռ�ռ��С
//�﷨ sizeof(�������� ���� ����)
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "short��ռ�ڴ�ռ�Ϊ" << sizeof(short) << endl;
	cout << "int��ռ�ڴ�ռ�Ϊ" << sizeof(int) << endl;
	cout << "long��ռ�ڴ�ռ�Ϊ" << sizeof(long) << endl;
	cout << "long long��ռ�ڴ�ռ�Ϊ" << sizeof(long long) << endl;
	cout << "short��ռ�ڴ�ռ�Ϊ" << sizeof(num1) << endl;//����������Ҳ����

}