#include<iostream>
using namespace std;
void bubblesort(int * arr, int len) {
	for (int i = 0;i < len - 1;i++) {//冒泡排序
		for (int j = 0;j < len - i - 1;j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}


}
void printarray(int * arr, int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;//遍历数组 打印数组
	}


}

int main() {
	int arr[10] = {4,3,6,9,1,2,10,8,7,5};//创建数组

	int len = sizeof(arr) / sizeof(arr[0]);//数组长度

	bubblesort(arr, len);//地址传递

	printarray(arr, len);

	system("pause");
	return 0;
}
  