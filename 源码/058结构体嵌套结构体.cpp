#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int id;
};

struct teacher {
	string name;
	int id;
	int age;
	struct student stu;
};





int main() {

	teacher t;
	t.name = "������";
	t.age = 24;
	t.id = 5211314;
	t.stu.name = "�پ�����";
	t.stu.id = 5201314;
	t.stu.age = 18;

	cout << "��ʦ������:" << t.name
		<< "  ��ʦ������:" << t.age
		<< "  ��ʦ�ı��:" << t.id
		<< "  ��ʦ������ѧ��������:" << t.stu.name
		<< "  ��ʦ������ѧ��������:" << t.stu.age
		<< "  ��ʦ������ѧ���ı��:" << t.stu.id << endl;

	system("pause");
	return 0;
}
