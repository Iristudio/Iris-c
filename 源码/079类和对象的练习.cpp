#include<iostream>
using namespace std;

//类中的属性和行为都统一称为 成员 
//属性 成员属性 成员变量
//行为 成员函数 成员方法

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
		cout << "学生的姓名:" << stu_name << "  学号:" << stu_code << endl;
	}
};


int main() {

	stu s1;
	//cout << "请输入姓名" << endl;
	//cin >> s1.name;
	//cout << "请输入学号" << endl;
	//cin >> s1.code;

	s1.setname("孟昊");
	s1.setcode(521);


	s1.showstu();

	system("pause");
	return 0;
}
