#include<iostream>
using namespace std;
#include"swap.h"


//函数的分文件编写几个步骤 
/*1.创建.h的头文件
* 2.在头文件中写函数的声明以及#include<iostream> 和 using namespace std;
* 3.创建.cpp源文件 
* 4.在源文件中写函数的定义 记得要在前面加#include<头文件名.h> 这样编译器才会知道这个源文件与头文件有关系 但不需要写#include<iostream> 和 using namespace std;了
* 5.在主文件中调用函数时 也需要在前面写#include<头文件名.h> 然后在main方法中调用即可
*/
int main() {
	int a = 10;
	int b = 20;

	swap(a, b);


	system("pause");
	return 0;



}