#include<iostream>
using namespace std;

int main() {
	int a = 100;
	int b = 20;
	int c = 0;
	//��Ŀ�����
	//���ʽ1 ? ���ʽ2 :���ʽ3
	//������ʽ1Ϊ�� ��ִ�б��ʽ2 
	//������ʽ1Ϊ�� ��ִ�б��ʽ3
	c = (a > b ? a : b);//��Ŀ�������Ҫ��()������
	cout << c <<endl;

	//��Ŀ��������ص�ֵ���Ǳ��� ���Կ��Լ�����ֵ
	(a > b ? a : b) = 200;
	cout << a << endl;
	cout << b << endl;

}