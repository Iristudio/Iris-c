#include<iostream>
using namespace std;

int main() {
	//ȡģ����Ҳ���������������
	int a1 = 10;
	int b1 = 3;

	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;

	cout << a2 % b2 << endl;//һ����������������� ��ôģ�������Լ�

	int a3 = 10;
	int b3 = 0;

	//cout << a3 % b3 << endl; ȡģ����Ҳ�ǻ��ڳ�������֮�ϵ� ���Գ���Ϊ0Ҳ�����˳�������

	double d1 = 2.5;
	double d2 = 1.4;

	//cout << d1 % d2 << endl; С���ǲ�������ȡģ�����
	//cout << a1 % d1 << endl; ������С��Ҳ�ǲ����Ե�
	//cout << d1 % b1 << endl; С��������Ҳ�ǲ��е�

	system("pause");
	return 0;

}