#include<iostream>
using namespace std;

int main() {
	//break的使用时机
	//1出现在switch语句中
	cout << "请选择难度" << endl;
	cout << "1.简单难度" << endl;
	cout << "2.普通难度" << endl;
	cout << "3.困难难度" << endl;
	cout << "4.地狱难度" << endl;


	int a = 0;
	cin >> a;
	switch (a) {
	case 1:
		cout << "您选择的简单难度" << endl;
		break;//退出switch语句 是退出整个语句 不是case分支 如果不写break就会一直执行下去
	case 2:
		cout << "您选择的普通难度" << endl;
		break;
	case 3:
		cout << "您选择的困难难度" << endl;
		break;
	case 4:
		cout << "您选择的地狱难度" << endl;
		break;
	default:
		cout << "别想逃课 爬." << endl;
		break;
	}

	//2.在循环语句中

	for (int i = 0;i < 10;i++) {
		if (i == 5) {
			break;//使用break 跳出循环
		}
		cout << i << endl;
	}

	//3.在嵌套循环语句
	for (int a = 0;a < 10;a++) {
		for (int i = 0;i < 10;i++) {
			if(i=5){
				break;
			}
		cout << "* ";
		}
		cout << endl;
}

	system("pause");
	return 0;
}