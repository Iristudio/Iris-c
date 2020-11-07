#include<iostream>
using namespace std;

//两种分类方式
	//按参数分类 分为 有参构造 和 无参构造(默认构造)
	//按类型分类 分为 普通构造 和 拷贝构造
class person {
public:
	//普通构造函数
	person() {
		cout << "person的无参构造函数调用" << endl;
	}

	person(int a) {
		age = a;
		cout << "person的有参构造函数调用" << endl;
	}
	
	//拷贝构造函数
	person(const person &p) {//将传入的人身上的所有属性 拷贝到我身上
		age = p.age;
		cout << "person的拷贝构造函数调用" << endl;
		}

	//析构
	~person(){
		cout << "person的析构函数调用" << endl;
	}

	int age;
};

void test1() {
	person p1;//,默认构造函数调用
	//三种调用方法
	//1.括号法
	person p2(10);//因为传进去个整型参数 所有会调用有参构造函数
	person p3(p2);//因为传进去个person参数 所以会调用拷贝构造函数

	cout << "p2的age:" << p2.age << endl;
	cout << "p3的age(从p2复制过来的):" << p3.age << endl;
	//调用默认构造函数时 不要加()
	//person p(); 如果写成这样 编译器会认为这是一个函数的声明 不会认为在创建对象

	//2.显示法
	person p5 = person(10);
	person p6 = person(p5);


	cout << "p5的age:" << p5.age << endl;
	cout << "p6的age(从p5复制过来的):" << p6.age << endl;

	person(10);//这是个匿名对象 特点 当前行执行结束后 系统会立即释放掉匿名对象
	cout << "aaaaa" << endl;//这行还没执行 上一行调用的析构函数已经执行了
	
	//注意事项2 不要利用拷贝构造函数 初始化一个匿名对象
	//person (p3);
	//上面这行 编译器会自动忽略掉() 也就是你重新定义了一遍p3
							
	//3.隐式转换法
	person p7 = 10;//相当于 写了 person p7 = person(10);
	person p8 = p7;//拷贝构造


}

int main() {
	test1();


	system("pause");
	return 0;
}
