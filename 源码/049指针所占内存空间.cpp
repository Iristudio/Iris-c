#include<iostream>
using namespace std;

int main() {
	//��Ȼָ��Ҳ��һ���������� ��ô��ռ�ö����ڴ�ռ���
	//int * p; ��������һ����ַ ʵ���Ͼ��Ǳ�����һ��16���Ƶ���
	//��ô16���Ƶ���ռ�����ڴ���
	//��32λ����ϵͳ�� ָ��ռ4���ֽڴ�С�Ŀռ�; ��64λ����ϵͳ�� ָ��ռ8���ֽڴ�С 
	
	int a = 10;
	int* p = &a;

	cout << "sizeof(int *) = " << sizeof(p) << endl;
	cout << "sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double *) = " << sizeof(double *) << endl;
	cout << "sizeof(char *) = " << sizeof(char *) << endl;
	//������ʲô�������� ��32λ����ϵͳ�� ָ�붼��ռ4���ֽڴ�С�Ŀռ�; ��64λ����ϵͳ�� ָ�붼��ռ8���ֽڴ�С


	system("pause");
	return 0;

}