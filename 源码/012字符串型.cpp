#include <iostream>
using namespace std;
#include <string>

int main() {
	//字符串作用 用于表示一串字符
	/*有两种表达方式
	* c语言风格
	  char 变量名[] = "字符串值";
	  c++语言风格
	  string 变量名 = "字符串值";
	*/
	char str1[] = "hello world";//注意要在变量名后加[] 不然就是字符型变量了 注意2 要使用双引号包含字符串变量值
	cout << str1 << endl;

	string str2 = "hello world";
	cout << str2 << endl;//注意如果想使用string数据类型要在开始加头文件#include<string>

	system("pause");
	return 0;
}