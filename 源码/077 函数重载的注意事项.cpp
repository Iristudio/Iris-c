#include<iostream>
using namespace std;
//�������ص�ע������
//1.������Ϊ���ص����� (����ǰ�Ӹ�constҲ��������)
void func(int& a) {//����⴫��10 �ͻ��� int& a = 10; ������ֻ�ܶ�ȡ ջ�����
	cout << "func(int& a) �ĵ���" << endl;
}
void func(const int& a) {
	cout << "func(const int& a) �ĵ���" << endl;
}
//������������Ĭ�ϲ���
void func1(int a, int b = 10) {
	cout << "func1(int a, int b = 10)�ĵ���" << endl;
}
void func1(int a) {
	cout << "func1(int a)�ĵ���" << endl;
}
int main() {
	int a = 10;
	func(a);
	func(10);//���10�ǻᴫ��const int& a�е� ��Ϊ�������int& a���ǲ��Ϸ���
	
	//func1(10);//���ֻ����һ���� �������Ͳ�֪����������һ�������� ����ֶ�����
	//������������Ĭ�ϲ�������ֶ����� ����
	system("pause");
	return 0;
}
