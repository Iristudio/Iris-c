#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main() {
	//创建结构体变量
	student s = { "saber",20,100 };

	//通过指针指向结构体变量
	student* p = &s;//因为想要创建的是自定义的类型 所以指针的类型也应该是我自定义的类型

	//通过指针访问结构体变量的属性 需要用 ->
	cout << "姓名:" << p->name << "  年龄:" << p->age << "  分数:" << p->score << endl;




	system("pause");
	return 0;
}
