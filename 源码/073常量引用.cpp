#include<iostream>
using namespace std;

void val(const int& val) {//���β�ǰ��һ��const ����������ھͲ������޸�������õ�ֵ��
	//val = 1000; ��������β�ǰдconst ��һ��Ҳ��ı��������ڵ�a
	cout << val << endl;

}

int main() {

	//�������� 
	//ʹ�ó���:���������β� ,��ֹ�����

	//int a = 10;
	//int& ref =10;�����Ǵ���� ��Ϊ���ñ�������һ��Ϸ����ڴ�ռ�

	const int& ref = 10;//�����ǿ��Ե� ��ʵ��һ���Ǳ����������� 
	//�������Ż�����:
	                  //int temp = 10;
					  //int& ref = temp;

   //ref = 20; ��һ���Ǵ���� const����������޶�����ֻ��״̬ ������ȥ�޸���;

	cout << "-----------------------------------------------" << endl;

	int a = 100;

	val(a);

	system("pause");
	return 0;
}
