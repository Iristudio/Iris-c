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
	t.name = "橘阳菜";
	t.age = 24;
	t.id = 5211314;
	t.stu.name = "藤井夏生";
	t.stu.id = 5201314;
	t.stu.age = 18;

	cout << "老师的姓名:" << t.name
		<< "  老师的年龄:" << t.age
		<< "  老师的编号:" << t.id
		<< "  老师所带的学生的姓名:" << t.stu.name
		<< "  老师所带的学生的年龄:" << t.stu.age
		<< "  老师所带的学生的编号:" << t.stu.id << endl;

	system("pause");
	return 0;
}
