#include<iostream>
using namespace std;

//���е����Ժ���Ϊ��ͳһ��Ϊ ��Ա 
//���� ��Ա���� ��Ա����
//��Ϊ ��Ա���� ��Ա����

class stu {
public:
	string stu_name;
	int stu_code;

	void setname(string name) {
		stu_name = name;
	}

	void setcode(int code) {
		stu_code = code;
	}

	void showstu() {
		cout << "ѧ��������:" << stu_name << "  ѧ��:" << stu_code << endl;
	}
};


int main() {

	stu s1;
	//cout << "����������" << endl;
	//cin >> s1.name;
	//cout << "������ѧ��" << endl;
	//cin >> s1.code;

	s1.setname("���");
	s1.setcode(521);


	s1.showstu();

	system("pause");
	return 0;
}
