#include<iostream>
using namespace std;

int main() {
	/*һά����������;
	 1. ����ͳ�������������ڴ��еĳ���
	 2. ���Ի�ȡ�������ڴ��е��׵�ַ
	 һ����16���������������ڴ��ַ���
	*/
	int arr[5] = { 1, 2, 3, 4, 5 };

	cout<<"��������ռ���ڴ�ռ���" << sizeof(arr) << endl;
	cout<<"ÿ��Ԫ��ռ���ڴ�ռ�Ϊ" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���" << sizeof(arr)/sizeof(arr[0]) << endl;

	//2
	cout << "�����׵�ַΪ" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ" << (int)&arr[0] << endl;

	//�������ǳ��� �����Խ��и�ֵ����
	//arr = 100; �����ͻᱨ��


	system("pause");
	return 0;
}