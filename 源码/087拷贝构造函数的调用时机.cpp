#include<iostream>
using namespace std;

//拷贝构造函数的调用时机
//1.使用一个已经创建完毕的对象来初始化一个对象
//2.值传递的方式 给函数的参数传值
//3.值方式返回局部对象

class person {
public:
	person() {
		cout << "person默认构造函数" << endl;
	}
	person(int mage) {
		age = mage;
		cout << "person有参构造函数" << endl;
	}
	person(const person &p){
		age = p.age;
		cout << "person拷贝构造函数" << endl;
	}

	~person() {

	}
	
	int age;
};

//1.使用一个已经创建完毕的对象来初始化一个对象
void test1() {
	person p1(20);
	person p2(p1);
	cout << "p2的age是" << p2.age << endl;
}
//2.值传递的方式 给函数的参数传值
void dowork(person p) {
	
}

void test2() {
	person p;//默认构造函数
	dowork(p);//拷贝构造函数
}

//3.值方式返回局部对象
person dowork2() {
	person p;
	return p;
}
void test3() {
	person p = dowork2();

}


int main() {
	test1();


	system("pause");
	return 0;
}
