#include<iostream>
using namespace std;
//c++���������������� ��װ �̳� ��̬
//c++��Ϊ�������ﶼ�Ƕ��� �������������Ժ���Ϊ

//���һ��Բ�� ��Բ���ܳ�
//Բ���ܳ���ʽ 2*��*r

const double PI = 3.14;
class circle {//����һ���� ����ΪԲ(circle)
	//1.Ȩ��
public:     //����Ȩ��
	//2.����
	int r;   //����һ������r����뾶
	//3.��Ϊ
	double zhouchang(){  //��һ������ ����ֵ���ܳ�
		return 2 * PI * r;
	}

};




int main() {

	//ͨ��Բ�� ����һ�������Բ(����)
	//ʵ���� (ͨ��һ���� ����һ������Ĺ���)
	circle c1;
	//��Բ���� �����Խ��и�ֵ
	c1.r = 10;

	cout << "Բ���ܳ���" << c1.zhouchang()<< endl;


	system("pause");
	return 0;
}
