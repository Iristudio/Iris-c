#include<iostream>
using namespace std;


int main() {
	int arr[5] = { 300, 350, 200, 400, 250 };
	//int max = 0;

	/*for (int i = 0; i < 5;i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "���ص�С�������" << max << endl;
	*/
	int start = 0;
	int end = sizeof(arr)/sizeof(arr[0]) - 1;
	
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	cout << "�������ú�" << endl;

	for (int i = 0;i < 5;i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}