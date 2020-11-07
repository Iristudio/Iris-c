#include<iostream>
using namespace std;
#include <string>

int main() {
	//数据的输入 通过键盘来获取数据
	//关键字 cin
	//语法 cin >> 变量

	//整型
	int a = 10;
	cout << "请给整型变量赋值" << endl;
	cin >> a;
	cout << "当前整型变量的值是" << a << endl;

	//浮点型
	float f = 3.14f;
	cout << "请给浮点型变量赋值" << endl;
	cin >> f;
	cout << "当前浮点型变量的值是" << f << endl;

	//字符型
	char ch = 'a';
	cout << "请给字符型变量赋值" << endl;
	cin >> ch;
	cout << "当前字符型变量的值是" << ch << endl;

	//字符串型
	string str= "hello";
	cout << "请给字符串型变量赋值" << endl;
	cin >> str;
	cout << "当前整型变量的值是" << str << endl;

	//布尔型
	bool flag = false;
	cout << "请给布尔型变量赋值" << endl;
	cin >> flag;
	cout << "当前布尔型变量的值是" << flag << endl;//默认除了0以外都是true


	system("pause");
	return 0;

}