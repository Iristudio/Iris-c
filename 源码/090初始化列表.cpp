#include<iostream>
using namespace std;

//��ʼ���б�
//�﷨ ���캯��(�������� �β�1,�������� �β�2) : ʵ��1(�β�1),ʵ��2(�β�2){ }
//�ŵ�:ûɶ�ŵ� ����һ������ -_-

class person {
public:
	//��ͳ��ʼ������ 
	/*person(int a, int b,int c) {
		m_a = a;
		m_b = b;
		m_c = c;
	}*/

	//��ʼ���б��ʼ��
	person(int d, int e, int f) :m_d(d), m_e(e), m_f(f) {

	}

	/*int m_a;
	int m_b;
	int m_c;*/

	int m_d;
	int m_e;
	int m_f;
};

int main() {
	//person p(10, 15, 20);
	//cout << "p��m_a:" << p.m_a << endl;
	//cout << "p��m_b:" << p.m_b << endl;
	//cout << "p��m_b:" << p.m_c << endl;

	person p(30, 20, 10);//�����ʼ���б�ĳ�ʼֵ
	cout << "p��m_d:" << p.m_d << endl;
	cout << "p��m_e:" << p.m_e << endl;
	cout << "p��m_f:" << p.m_f << endl;

	system("pause");
	return 0;
}
