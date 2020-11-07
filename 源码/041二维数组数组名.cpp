#include<iostream>
using namespace std;

int main(){
	/*二维数组名用途
	* 1.看二维数组所占内存空间
	* 2.获取二维数组首地址
	*/
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "二维数组占用内存空间为" << sizeof(arr) << endl;
	cout << "二维数组第一行占用内存空间为" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存为" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "二维数组的列数" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;


	cout << "二维数组的首地址为" << (int)arr << endl;
	cout << "二维数组第一行的首地址为" << (int)arr[0]<< endl;
	cout << "二维数组第二行的首地址为" << (int)arr[1] << endl;
	
	cout << "二维数组第一个元素的首地址为" << (int)&arr[0][0] << endl;//单个元素想看地址要在元素变量名前加&
	cout << "二维数组第二个元素的首地址为" << (int)&arr[0][1] << endl;
	system("pause");
	return 0;
}