#include<iostream>
using namespace std;
//c++面向对象的三大特性 封装 继承 多态
//c++认为万事万物都是对象 对象上有其属性和行为

//设计一个圆类 求圆的周长
//圆的周长公式 2*Π*r

const double PI = 3.14;
class circle {//创建一个类 类名为圆(circle)
	//1.权限
public:     //公共权限
	//2.属性
	int r;   //设置一个变量r保存半径
	//3.行为
	double zhouchang(){  //设一个函数 返回值是周长
		return 2 * PI * r;
	}

};




int main() {

	//通过圆类 创建一个具体的圆(对象)
	//实例化 (通过一个类 创建一个对象的过程)
	circle c1;
	//给圆对象 的属性进行赋值
	c1.r = 10;

	cout << "圆的周长是" << c1.zhouchang()<< endl;


	system("pause");
	return 0;
}
