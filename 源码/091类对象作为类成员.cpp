#include<iostream>
using namespace std;

//类对象作为类成员
//有person类 和 phone类 其中person类的成员是phone的对象
//那么person类与phone类的构造与析构顺序是怎么样的

//跟先有鸡还是先有蛋的问题有点类似
class phone {
public:
	phone(string pname) {
		cout << "phone的构造函数调用" << endl;
		m_pname = pname;
	}

	~phone() {
		cout << "phone的析构函数调用" << endl;
	}

	string m_pname;
};

class person {
public:
	person(string name, string pname) :m_name(name), m_phone(pname) {//初始化列表
		cout << "person的构造函数调用" << endl;
	}
	
	~person() {
		cout << "person的析构函数调用" << endl;
	}
	string m_name;
	phone m_phone;
};
//构造的顺序 当其他类对象作为本类的成员时 先构造类对象,再构造自身
//析构的顺序与构造相反  当其他类对象作为本类的成员时 先析构自身,再析构类对象
void test() {
	person p("Iris", "samsung");
	cout << p.m_name << "的手机是" << p.m_phone.m_pname << endl;
}

int main() {
	test();

	system("pause");
	return 0;
}
 