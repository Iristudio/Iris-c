#include<iostream>
using namespace std;

//ֵ����
//���庯�� ʵ���������ֽ��н����ĺ���

void swap(int num1, int num2) {//�����������Ҫ����ֵ ��ô����ֵ����ֱ��дvoid

	cout << "����ǰ" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//�����������Ҫ����ֵ Ҳ���Ƿ���ֵ������voidʱ ���Բ�дreturn���ʽ
}

int main() {
	int a = 10;
	int b = 50;

	//��������ֵ���ݵ�ʱ�� �������βη����ı� ����Ӱ�쵽��ʵ��
	cout << "����ǰ " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a,b);

	cout << "������ " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}