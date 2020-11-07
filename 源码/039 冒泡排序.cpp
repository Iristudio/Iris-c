#include<iostream>
using namespace std;

int main() {
	int arr[9] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };

	//开始冒牌排序
	//排序的总轮数为 元素个数 - 1;
	//每次对比的次数 = 元素总个数 - 当前排序的轮数 - 1;

	for (int i = 0;i < 9 - 1;i++) {//这是总轮数的循环

		for (int j = 0;j < 9 - i -1;j++) {//这是对比次数的循环 
			if (arr[j] > arr[j + 1]) {//如果数组第一个数字比第二个数字大 那么就交换两个数组的位置
				int temp = arr[j];		//int temp 是临时开辟的一块内存空间 用于储存交换位置时 被覆盖位置的变量
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	cout << "排序后" << endl;
	for (int i = 0;i < 9;i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}