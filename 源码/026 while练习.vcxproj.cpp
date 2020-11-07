#include<iostream>
#include<time.h>
using namespace std;


int main() {

	//系统生成随机数
	srand((unsigned int)time(NULL));//如果不写这一句 rand并不会完全生成随机数 这句是设好随机数种子
	int a = rand() % 100 + 1; //rand是c++中生成随机数的一种方法 语法rand()%数字 就会生成0到数字-1范围内的一个随机数
	//我想要1-100的随机数只需要在rand()%100后加一个1
		cout << a << endl;

		int val = 0;
		int b = 1;
			while (val != a)
			{
				cin >> val;
				if (b < 5) {
					if (val > a) {
						cout << "您输入的数过大,请重试一个数" << endl;
						++b;
					}
					else if (val < a) {
						cout << "您输入的数过小,请重试一个数" << endl;
						++b;
					}
					else if (val = a) {
						cout << "您猜对了" << endl;
						break;
					}
				}
				else {
					cout << "游戏结束,您失败了" << endl;
					break;
				}
			}
			
		
		system("pause");
		return 0;
}