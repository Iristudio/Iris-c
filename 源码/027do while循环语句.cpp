#include<iostream>
using namespace std;

int main(){
	//do...while与while的区别是 do...while会先执行一次循环语句
	int a = 0;
	do
	{
		cout << a << endl;
		a++;
	} while (a);//do...while如果这样 会进入死循环
	//因为do...while先进行了一次循环使得a的值不为0 然后就开始死循环了

	while (a) {//while语句这样 不会进入循环 因为a的值为0是假的 while不会执行
		cout << a << endl;
		a++;
	}




	system("pause");
	return 0;
}