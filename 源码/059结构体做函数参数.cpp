#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void zhichuandi(student s1) {
	cout <<"ѧ������:" << s1.name
		<< "  ѧ������:" << s1.age
		<< "  ѧ������:" << s1.score << endl;
}

void dizhichuandi(student* p) {

	p->age = 100;
	cout << "ѧ������:" << p->name
		<< "  ѧ������:" << p->age
		<< "  ѧ������:" << p->score << endl;
}

int main() {
	student stu;
	stu.name = "��ɫ��";
	stu.age = 17;
	stu.score = 99;

	zhichuandi(stu);//ֵ����

	dizhichuandi(&stu);//��ַ����

	cout << "ѧ������:" << stu.name
		<< "  ѧ������:" << stu.age
		<< "  ѧ������:" << stu.score << endl;//��ַ���ݸı��β� ��ı�ʵ�ε�

	system("pause");
	return 0;
}
