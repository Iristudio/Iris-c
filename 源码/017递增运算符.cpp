#include<iostream>
using namespace std;

int main() {
	//ǰ�õ���
	int a = 10;
	++a; //ʹ����+1
	cout << a << endl;

	//���õ���
	int b = 10;
	b++;
	cout << b << endl;

	//ǰ������õ�����
	// ǰ�����ȶԱ���+1�ٽ�������
	//ǰ��
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout<<"a1 =" << a1 << endl;
	cout<<"b1 =" << b1 << endl;

	//�������Ƚ������� ���������Ա���+1
	//����
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a2 =" << a2 << endl;
	cout << "b2 =" << b2 << endl;


	system("pause");
	return 0;

}