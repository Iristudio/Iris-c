#include<iostream>
using namespace std;

void chuandi(int& a, int& b) {//�β�д��ʵ�ε�����(����)
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	chuandi(a, b);//���ô���


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}
