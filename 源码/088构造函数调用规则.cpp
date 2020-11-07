#include<iostream>
using namespace std;
/*默认情况下 c++至少给一个类添加三个函数
* 1.默认构造函数 (无参 函数体为空)
* 2.默认析构函数(无参 构造体为空)
* 3.默认奥贝构造函数 对属性进行值拷贝
* 
* 如果用户定义有参函数 c++不会再提供无参构造 但是会提供默认拷贝构造
* 如果用户定义拷贝构造函数 c++不会再提供其他构造函数
* 
*/

class person {
public:
	person() {
		cout << "person默认构造函数调用" << endl;
	}

	person(int age) {
		page = age;
		cout << "" << endl;
	}

	//person(const person& p) {
	//	cout << "person拷贝函数调用" << endl;
	//	page = p2.page;
	//}

	~person() {
		cout << "person析构函数函数调用" << endl;
	}

	int page;
};

void test1() {
	person p1;
	p1.page = 10;
	person p2(p1);

	cout << "拷贝构造参数的age" << p2.page << endl;
}

int main() {
	test1();


	system("pause");
	return 0;
}
