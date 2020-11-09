#include<iostream>
using namespace std;

//空指针调用成员函数

class person {
public:
	void showname() {
		cout << "class的name是 person" << endl;
	}

	void showpersonage() {
		//为了保证代码的健壮性 可以在这写一个if
		if (this == NULL) {//如果传入了一个空指针 就直接结束这个函数
			return;
		}

		cout << "person的age是" << m_age << endl;//这里会报异常 this是nullptr
		//其实这里的m_age是this->m_age 但this指的对象p是一个空指针 所以会报错
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
