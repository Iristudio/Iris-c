#include<iostream>
using namespace std;
//�����ǳ����
//ǳ������������������ ����������ָ��ָ��һ��������ַ �������������ͷ����ε�ַ Ҳ���ǻ��ظ��ͷ��ڴ�
//�������ǳ�������������� ���ڿ������������⿪��һ���ڴ�ռ� ���Ա��汻�����ĺ����Ľ�����
class person {
public:
	person() {
		cout << "person���캯������" << endl;
	}
	
	person(int age, int height) {
		m_age = age;
		m_height = new int(height);
		cout << "person�вι��캯������" << endl;
	}
	
	person(const person& p) {
		m_age = p.m_age;
		//m_height = p.m_height; 
		//����㲻�Լ�д��������(Ҳ����ǳ����) �������ͻ��Զ���д���� ����vs2019�ı�ķ�������� ��������� ��vs2017�лᱨ��
		m_height = new int(*p.m_height);//���
	}

	~person() {
		cout << "person������������" << endl;
	}

	int m_age;
	int* m_height;
};

void test() {
	person p1(18, 180);
	cout << "p1������" << p1.m_age << "�����" << *p1.m_height << endl;

	person p2(p1);
	cout << "p2������" << p2.m_age << "�����" << *p2.m_height << endl;
}

int main() {
	test();


	system("pause");
	return 0;
}
