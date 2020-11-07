#include<iostream>
#include<string>
using namespace std;

int main() {

	//单行if语句
	int b = 0;
	cout << "请输入您的存款" << endl;
	cin >> b;
	cout << "您的存款是:" <<b<< endl;

	if (b > 0) {
		cout << "您是个有钱人" << endl;
	}

	//多行if语句
	int a = 0;
	cout << "请输入分数:" << endl;
	cin >> a;
	cout << "您输入的分数是" << a << endl;

	if (a > 600) {//if后面不要写分号 直接写{
		cout << "您考上了一本大学" << endl;
	}
	else {
		cout << "您未考上一本大学" << endl;
	}
	//多条件if语句
	string wife = "none";
	cout << "请输入您的老婆" << endl;
	cin >> wife;
	cout << "您的老婆是" << endl;
	if (wife == "雪乃") {
		cout << "别做梦了" << endl;
	}
	else if (wife == "团子") {
		cout << "您配吗" <<endl;
	}
	else if (wife == "一色") {
		cout << "嘿 嘿 照照镜子去吧" << endl;
	}
	else {
		cout << "洗洗睡吧 您没有老婆" << endl;
	}

	//嵌套if语句
	int m = 0;
	cout << "请输入您的余额:" << endl;
	cin >> m;

	if (m < 100) {
		cout << "穷逼" << endl;
		if (m < 10) {
			cout << "穷逼中的战斗机" << endl;
		}
		else {
			cout << "阿姨 我不想努力了" << endl;
		}
	}
	else if(m > 100){
		cout << "叔叔我啊 最喜欢钱了" << endl;
	}

	system("pause");
	return 0;
}