#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void zhichuandi(student s1) {
	cout <<"学生姓名:" << s1.name
		<< "  学生年龄:" << s1.age
		<< "  学生分数:" << s1.score << endl;
}

void dizhichuandi(student* p) {

	p->age = 100;
	cout << "学生姓名:" << p->name
		<< "  学生年龄:" << p->age
		<< "  学生分数:" << p->score << endl;
}

int main() {
	student stu;
	stu.name = "三色堇";
	stu.age = 17;
	stu.score = 99;

	zhichuandi(stu);//值传递

	dizhichuandi(&stu);//地址传递

	cout << "学生姓名:" << stu.name
		<< "  学生年龄:" << stu.age
		<< "  学生分数:" << stu.score << endl;//地址传递改变形参 会改变实参的

	system("pause");
	return 0;
}
