#include<iostream>
using namespace std;
//���������� ת�� int* const ref = &a;
void func(int& ref){
	ref = 100;//ref������ ת����*ref = 100;
}
int main() {
	int a = 10;
	
	int& ref = a;//��������⵽���� �Զ�ת���� int* const ref = &a;
	ref = 20;//ת���� *ref = 20;

	cout<< "a��ֵ��"<< a << endl;
	cout<<"ref��ֵ��" << ref << endl;
	
	func(a);

	//���� ���õı�����һ��ָ�볣��
	//c++�Ƽ�ʹ�����ü��� ��Ϊ�﷨���� ���õı�����ָ�볣�� �����е�ָ�����������������������
	system("pause");
	return 0;
}
