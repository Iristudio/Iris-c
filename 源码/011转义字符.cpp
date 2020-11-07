#include<iostream>
using namespace std;

int main() {
	//转义字符 作用 用于表示不能显示出来的ASCII字符
	//现阶段我们常用的转义字符有 \n \\ \t
	//换行符 \n
	cout << "hello\nworld"<<endl;

	//单反斜杠 如果你想输出一个\ 肯定会报错因为是转义字符 所以你写一个\就需要写\\的
	cout << "\\" << endl;

	//水平制表符 \t 相当于tab
	cout << "aaa\thelloworld" << endl;
	cout << "a\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;
	//如果只用空格达不到水平效果
	cout << "aaa helloworld" << endl;
	cout << "a helloworld" << endl;
	cout << "aaaaa helloworld" << endl;


	system("pause");
	return 0;

}