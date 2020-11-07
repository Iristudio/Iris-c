#include<iostream>
using namespace std;

int main() {

	//goto 会跳到你的标签处 但非常不推荐使用 因为会是代码可读性降低
	cout << "1" << endl;
	goto flag;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	flag:
	cout << "5" << endl;
	cout << "6" << endl;



}