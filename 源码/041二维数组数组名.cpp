#include<iostream>
using namespace std;

int main(){
	/*��ά��������;
	* 1.����ά������ռ�ڴ�ռ�
	* 2.��ȡ��ά�����׵�ַ
	*/
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	cout << "��ά����ռ���ڴ�ռ�Ϊ" << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ���ڴ�ռ�Ϊ" << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ" << sizeof(arr[0][0]) << endl;

	cout << "��ά���������" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "��ά���������" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;


	cout << "��ά������׵�ַΪ" << (int)arr << endl;
	cout << "��ά�����һ�е��׵�ַΪ" << (int)arr[0]<< endl;
	cout << "��ά����ڶ��е��׵�ַΪ" << (int)arr[1] << endl;
	
	cout << "��ά�����һ��Ԫ�ص��׵�ַΪ" << (int)&arr[0][0] << endl;//����Ԫ���뿴��ַҪ��Ԫ�ر�����ǰ��&
	cout << "��ά����ڶ���Ԫ�ص��׵�ַΪ" << (int)&arr[0][1] << endl;
	system("pause");
	return 0;
}