#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int& b = a;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	cout << "a�ĵ�ַ��" << &a << endl;//����ֻ�Ǹ��������˸����� ���������õĵ�ַ��һ����
	cout << "b�ĵ�ַ��" << &b << endl;



	system("pause");
	return 0;
}
