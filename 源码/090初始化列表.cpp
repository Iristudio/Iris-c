#include<iostream>
using namespace std;

//初始化列表
//语法 构造函数(数据类型 形参1,数据类型 形参2) : 实参1(形参1),实参2(形参2){ }
//优点:没啥优点 最多简化一下行数 -_-

class person {
public:
	//传统初始化操作 
	/*person(int a, int b,int c) {
		m_a = a;
		m_b = b;
		m_c = c;
	}*/

	//初始化列表初始化
	person(int d, int e, int f) :m_d(d), m_e(e), m_f(f) {

	}

	/*int m_a;
	int m_b;
	int m_c;*/

	int m_d;
	int m_e;
	int m_f;
};

int main() {
	//person p(10, 15, 20);
	//cout << "p的m_a:" << p.m_a << endl;
	//cout << "p的m_b:" << p.m_b << endl;
	//cout << "p的m_b:" << p.m_c << endl;

	person p(30, 20, 10);//传入初始化列表的初始值
	cout << "p的m_d:" << p.m_d << endl;
	cout << "p的m_e:" << p.m_e << endl;
	cout << "p的m_f:" << p.m_f << endl;

	system("pause");
	return 0;
}
