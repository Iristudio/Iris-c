#include<iostream>
using namespace std;

//��̬��Ա����

class person {
public:
	static void func() {
		m_a = 100;//��̬��Ա���� ���Է��� ��̬��Ա����
		//m_b = 200;// ���ᱨ�� C++ �Ǿ�̬��Ա���ñ������ض��������
		//˵�� ��̬��Ա���� �����Է��� �Ǿ�̬��Ա���� 
		//��Ϊ����ж���������� �޷����ֵ����ǵ�����һ�������m_b
		cout << "func��������" << endl;
	}

	static int m_a;//������̬��Ա����
	int m_b;//�����Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2() {
		cout << "func2��������" << endl;
	}

};

int person::m_a = 0;//��ʼ����̬��Ա����

void  test01() {
	//��̬��Ա���������ַ��ʷ�ʽ
	//1 ͨ��������з���
	person p;
	p.func();

	//2 ͨ������������ 
	person::func();

	//person::func2(); //�ᱨ�� C++ ���� (������ ��������:21) ���ɷ���
	//֤���� ��̬��Ա����Ҳ���з���Ȩ�޵� ������ʲ���˽�о�̬��Ա����
}

int main() {
	test01();


	system("pause");
	return 0;
}
