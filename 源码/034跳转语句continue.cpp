#include<iostream>
using namespace std;

int main() {
	//continue语句用于循环之中 当循环运行到continue那行之后就会跳过之后的 开始执行下次一次循环
	


	for (int i = 0;i < 100;i++) {
		if (i % 2 == 0) {
			continue;//可以筛选条件 执行到此就不再向下运行了 去执行下一次循环了
			//如果在这写break 就会直接退出循环了 因为0是偶数
		}
		cout << i << endl;
	}



}