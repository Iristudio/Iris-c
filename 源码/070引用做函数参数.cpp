#include<iostream>
using namespace std;

void chuandi(int& a, int& b) {//形参写成实参的引用(别名)
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	chuandi(a, b);//引用传递


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}
