#include<iostream>
using namespace std;

int main(){
	/*
	ʵ�ͣ������ͣ�
	float ��ʾ������ �ڴ�ռ�ռ��4�ֽ� 7λ��Ч����
	double ��ʾ˫���� �ڴ�ռ�ռ��8�ֽ� 15-16λ��Ч����
	*/
	float f1 = 3.14f;//��Ϊc++Ĭ��С����˫���ȵ�double ������С�����һ��f��ʾ���ǵ����ȵ�
	cout << "f1=" << f1 << endl;

	double d1 = 3.14;
	cout << "d1=" << d1 << endl;

	float f4 = 3.1415926;
	double d2 = 3.1415926;
	cout << "f4=" << f4 << endl;
	cout << "d2=" << d2 << endl;
	//�ڴ����������ʾ6λ��Ч���� ���Բ�������ʾ9֮���

	cout << "float��ռ�ڴ�ռ�Ϊ" << sizeof(float) << endl;
	cout << "double��ռ�ڴ�ռ�Ϊ" << sizeof(double) << endl;
	//��ѧ������
	float f2 = 3e2;
	cout << "f2=" << f2 << endl;//3e2 �൱�� 3*10^2
	float f3 = 3e-2;
	cout << "f3=" << f3 << endl;//3e-2 �൱�� 3*10^-2=3*0.1^2


	system("pause");
	return 0;


}