#include<iostream>
using namespace std;

int main(){
	//�߼������ �� !

	int a = 10;//��c++�� ��0��Ϊ��

	//���aΪ�� ��!aΪ�� ���aΪ�� ��!aΪ��
	cout << !a << endl;

	cout << !!a << endl;

	//�߼������ �� &&
	// ������Ϊ������� ����һ��Ϊ�ټ�Ϊ�� ������Ҳ�Ǽ�
	int a1 = 10;
	int b1 = 10;
	cout << (a1 && b1) << endl;

	int a2 = 10;
	int b2 = 0;
	cout << (a2 && b2) << endl;

	int a3 = 0;
	int b3 = 0;
	cout << (a3 && b3) << endl;
	//�߼������ �� ||
	//һ��Ϊ������� ������Ҳ���� �������ٲ��Ǽ�
	int a4 = 10;
	int b4 = 10;
	cout << (a4 || b4) << endl;

	int a5 = 10;
	int b5 = 0;
	cout << (a5 || b5) << endl;

	int a6 = 0;
	int b6 = 0;
	cout << (a6 || b6) << endl;

	system("pause");
	return 0;
}