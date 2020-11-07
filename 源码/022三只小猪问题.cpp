#include<iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入a小猪的重量:" << endl;
	cin >> a;
	cout << "请输入b小猪的重量:" << endl;
	cin >> b;
	cout << "请输入c小猪的重量:" << endl;
	cin >> c;

	if (a > b) {
		if (a > c) {
			cout << "a小猪最重" << endl;
		}
		else if (a < c) {
			cout << "c小猪最重" << endl;
		}
		else {
			cout << "a和c一样重 都比b重";
		}
	}
	else if (a < b) {
		if (b > c) {
			cout << "b小猪最重" << endl;
		}
		else if (b < c) {
			cout << "c小猪最重" << endl;
		}
		else {
			cout << "b和c一样重 都比a重";
		}
	}
	else if(a == b) {
		if (a == c) {
			cout << "三只小猪一样重" << endl;
		}
		else if (a > c) {
			cout << "a和b一样重 比c重"<<endl;
		}
		else {
			cout << "c小猪最重"<<endl;
		}
	}



}