#include <iostream>
using namespace std;

int main() {
	//����ֵ���� ���� �����������ʹ������ٵ�ֵ
	//bool����ֻ������ֵ
	//true ---�� ������Ϊ1��
	//false---�� ������Ϊ0��
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	//��������ֻռһ���ֽڴ�С
	cout<< "bool������ռ�ڴ�ռ�Ϊ" << sizeof(bool) << endl;
	system("pause");
	return 0;
}