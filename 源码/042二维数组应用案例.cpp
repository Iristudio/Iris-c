#include<iostream>
using namespace std;

int main() {
	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[3] = { "张三","李四","王五" };
	for (int i = 0;i < 3;i++) {
		int a = 0;
		for (int j = 0; j < 3;j++) {
			a = a + arr[i][j];
		
		}
		cout << names[i] << "的总成绩是" << a << endl;

	}







	system("pause");
	return 0;
}