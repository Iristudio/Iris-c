#include<iostream>
using namespace std;

//�������Ϊ���Ա
//��person�� �� phone�� ����person��ĳ�Ա��phone�Ķ���
//��ôperson����phone��Ĺ���������˳������ô����

//�����м��������е��������е�����
class phone {
public:
	phone(string pname) {
		cout << "phone�Ĺ��캯������" << endl;
		m_pname = pname;
	}

	~phone() {
		cout << "phone��������������" << endl;
	}

	string m_pname;
};

class person {
public:
	person(string name, string pname) :m_name(name), m_phone(pname) {//��ʼ���б�
		cout << "person�Ĺ��캯������" << endl;
	}
	
	~person() {
		cout << "person��������������" << endl;
	}
	string m_name;
	phone m_phone;
};
//�����˳�� �������������Ϊ����ĳ�Աʱ �ȹ��������,�ٹ�������
//������˳���빹���෴  �������������Ϊ����ĳ�Աʱ ����������,�����������
void test() {
	person p("Iris", "samsung");
	cout << p.m_name << "���ֻ���" << p.m_phone.m_pname << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}
 