#include<iostream>
using namespace std;
//���� 
//�����ɳ���Ա�����ͷ� ,��������Ա�������ͷ� �������ʱ�ɲ���ϵͳ����
//��c++�� ��Ҫ����new�ڶ������ٿռ�


int * func() {

	//����new�ؼ��� ���Խ����ݿ��ٵ�����
	int* p = new int(10);//�����ָ�뱾��Ҳ��һ������ �ֲ����� ����ջ��,ָ�뱣������ݴ���ڶ���
	return p;

}

int main() {
	
	//�ڶ�����������
	int* p = func();

	cout << *p << endl;
	cout << *p << endl;

	cout << *p << endl;




	system("pause");
	return 0;
}
