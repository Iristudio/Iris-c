#include<iostream>
using namespace std;

//ʵ���������ֽ��н����Ĵ���
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "������a = " << a << endl;
	cout << "������b = " << b << endl;
}
void swap02(int* p, int* q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}


int main() {

	int a = 10;
	int b = 20;
	//ָ���뺯��
	//1.ֵ����
	swap01(a, b);

	cout << "��������ֵ����a = " << a << endl;
	cout << "��������ֵ����b = " << b << endl;
	
	//��ַ����
	//��ַ�����ǿ����޸ĵ�ʵ�ε�ֵ��
	swap02(&a, &b);

	cout << "�������ڵ�ַ����a = " << a << endl;
	cout << "�������ڵ�ַ����b = " << b << endl;


	system("pause");
	return 0;
}
