#include<iostream>
using namespace std;
#include<string>

//自定义数据类型  一些类型集合成一个类型 
//语法 struct 类型名称{  成员列表  }
struct student {  //创建了一个数据类型 student类型
	//这里就是student的成员列表
	string name;//姓名
	int age;//年龄
	int score;//分数
}s3;//这就是在定义结构体创建变量

int main() {
	//struct 创建student类型的变量的三种方法
	//1. struct 类型名称 变量名;
	struct student s1;
	//给s1的属性赋值 通过访问结构体变量中的属性
	s1.name = "不破爱花";
	s1.age = 18;
	s1.score = 99;

	cout << "姓名:" << s1.name << "  年龄:" << s1.age << "  成绩:" << s1.score << endl;

	//2.struct 类型名称 变量名 = { ... };
	struct student s2 = {"menghao",20,100};
	cout << "姓名:" << s2.name << "  年龄:" << s2.age << "  成绩:" << s2.score << endl;

	//3 在定义结构体时顺便创建结构体变量 见12行
	s3.name = "楪祈";
	s3.age = 18;
	s3.score = 99;
	cout << "姓名:" << s3.name << "  年龄:" << s3.age << "  成绩:" << s3.score << endl;

	//在创建结构体变量的时候 struct关键字可以省略
	student s4;
	//但是 定义结构体时 struct绝不能少
	//结构体变量用操作符 . 来访问成员 例如 s1.name

	system("pause");
	return 0;
}
