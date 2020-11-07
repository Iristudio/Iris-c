#include<iostream>
using namespace std;

int main() {
	//我想打印输出0-9
	//一个一个输出太费劲的 所以我们可以使用循环结构 
	//while循环 
	//while(){}只要括号内是真 就可以一直循环下去
	//

	int a = 0;
	while (a < 10) {//只要a++没加到10 while循环就会一直执行
		cout << a << endl;
		a++;
	}
	//在写死循环时候 一定要注意死循环的出现
	system("pause");
	return 0;
}