#include<iostream>
using namespace std;

int main() {

	int a1 = 10;
	int b1 = 20;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//��Ϊa1 b1 ����һ��int����(����)���Գ�����Ҳֻ���Ǹ����� ������С��

	int a2 = 10;
	int b2 = 3;

	cout << a2 / b2 << endl;//����һ��int����(����)���Գ�����Ҳֻ���Ǹ����� ������С��


	int a3 = 10;
	int b3 = 0;

	//cout << a3 / b3 << endl; �����ᱨ�� ��Ϊ��������Ϊ0

	//����С�������ദ�� yes
	double a4 = 0.5;
	double b4 = 0.25;

	cout << a4 / b4 << endl;

	double a5 = 0.5;
	double b5 = 0.22;

	cout << a5 / b5 << endl;//����Ǹ������������ �Ϳ��Եõ�С��
	cout << a3 / b5 << endl;//ֻҪ��һ����ֵ�Ǹ��������ͼ���

	system("pause");
	return 0;
}