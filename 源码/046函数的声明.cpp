#include<iostream>
using namespace std;

//����������
// ����һ���ȽϺ��� ʵ���������ͱ����Ƚϴ�С ���رȽϴ��ֵ

//����������ʵ���Ͼ��� ��ǰ���߱����������Ĵ��� ��Ϳ�����main����������д�����Ķ���
//ע�� ��������������д��� ������ֻ��дһ��


int max(int a, int b);//����������

int main() {
	int a = 10;
	int b = 20;

	int c = max(a, b);
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}


int max(int a, int b) { //�����Ķ���
	return a > b ? a : b;
}