#include<iostream>
using namespace std;

//在c++中 struct和class的唯一区别就在于默认的访问权限不同
//区别 struct默认权限为公共
//	   class 默认权限为私有

class test1 {
	int num1;//在类中 没有写权限
};

struct test2 {
	int num2;
};

int main() {
	test1 a1;
	test2 b1;

	//a1.num1 = 0;  这么写 会报错 这个成员在类外是不可访问的
	b1.num2 = 41000;

	system("pause");
	return 0;
}
