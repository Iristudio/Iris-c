#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};
//地址传递的好处 只需要传四个字节大小的指针过来 不用把所有的属性都复制一遍 
//将函数中的形参改成指针 可以减少内存空间 不会赋值新的副本
void printstudent(const student * p) {
	// 但是地址传递如果改变形参的话 实参也会跟着改变 所以我们可以在指针前 加一个const
	//p->age = 150; 这样就会直接报错 加入const后 一旦有修改的擦做就可以报错 可以防止我们的误操作

	cout << "学生的姓名" << p->name
		<< "学生的年龄" << p->age
		<< "学生的分数" << p->score << endl;



}

int main() {
	student s1 = { "远坂凛",19,99 };

	printstudent(&s1);

	system("pause");
	return 0;
}
