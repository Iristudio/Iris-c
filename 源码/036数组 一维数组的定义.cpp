#include<iostream>
using namespace std;

int main() {
	//数组
	/*数组特点 
	* 放在一块连续的内存空间中
	*数组中每个元素都是相同数据类型
	 数组的下标是从0开始的!!!!!!!!!!
	 我们可以通过数组的下标 来访问数组中的元素	
	
	 数组有三种书写方式
	 1,数据类型 数组名[数组长度];
	 2.数据类型 数组名[数组长度] = {值1,值2,...};
	 3.数组类型 数组名[] = {值1,值2,...};
	*/
	//第一种
	int arr[5];

	arr[0] = 10;//元素的下标是从0开始索引的
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	cout << endl;

	//第二种
	int arr2[5] = { 10, 20, 30, };//如果在初始化阶段时 没有全部填写完,会用0来补充剩余数据

	for (int i = 0;i < 5;i++) {
		cout << arr2[i] << endl;
	}
	cout << endl;

	//第三种

	int arr3[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

	for (int i = 0;i < 9;i++) {
		cout << arr3[i] << endl;
	}



}