#include<iostream>
using namespace std;

//��ָ����ó�Ա����

class person {
public:
	void showname() {
		cout << "class��name�� person" << endl;
	}

	void showpersonage() {
		//Ϊ�˱�֤����Ľ�׳�� ��������дһ��if
		if (this == NULL) {//���������һ����ָ�� ��ֱ�ӽ����������
			return;
		}

		cout << "person��age��" << m_age << endl;//����ᱨ�쳣 this��nullptr
		//��ʵ�����m_age��this->m_age ��thisָ�Ķ���p��һ����ָ�� ���Իᱨ��
	}

	int m_age;
};

void test1() {
	person* p = NULL;

	p->showname();
	p->showpersonage();
}

int main() {
	test1();


	system("pause");
	return 0;
}
