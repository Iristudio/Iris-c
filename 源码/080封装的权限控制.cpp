#include<iostream>
using namespace std;
//访问权限
//三种
//公共权限 public		成员 类内的可以访问 类外可以访问
//保护权限 protected	成员 类内的可以访问 类外不可以访问
//私有权限 private		成员 类内的可以访问 类外不可以访问
//保护与私有权限的区别
//在以后学到的继承中 会用到 
//保护权限 子类可以访问父类中的保护内容
//私有权限 子类不可以访问父类中的私有内容

class person {
public:		//公共权限
	string name;

protected:	//保护权限 
	string sex;

private:	//私有权限
	int password;

public:
	void func() {
		name = "孟昊";
		sex = "男";
		password = 123456;
	}

};




int main() {

	//实例化一个对象
	person p1;
	p1.name = "楪祈"; //公共属性 在类外也可以访问到
	//p1.sex = "女" 保护权限的内容 在类外访问不到
	//p1.password = 654321; 私有权限的内容 在类外访问不到


	p1.func(); 

	system("pause");
	return 0;
}
