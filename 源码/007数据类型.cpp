#include <iostream>
using namespace std;

int main() {
	//c++�涨�ڴ���һ����������ʱ ����Ҫָ����Ӧ���������ͣ������޷������������ڴ�
	/*���ͣ����ͱ�����ʾ�����������͵�����c++�������ܱ�ʾ����
	* ��������ռ���ڴ�ռ䲻ͬ
	short�������ͣ���2�ֽ�									ȡֵ��Χ -2^15--2^15-1
	int�����ͣ���4�ֽ�												 -2^31--2^31-1
	long�������ͣ���4�ֽڣ�linux��32λΪ4�ֽ� 64λΪ8�ֽڣ�			 -2^31--2^31-1
	long long���������ͣ���8�ֽ�									 -2^63--2^63-1
	*/
	short num1 = 10;//shortȡֵ��Χ��-32768--32767
	//short num5 = 10000000;�������ᱨ���ǲ�������ʾ10000000
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;

	cout << "numn1=" << num1 << endl;
	cout << "numn2=" << num2 << endl;
	cout << "numn3=" << num3 << endl;
	cout << "numn4=" << num4 << endl;


	system("pause");

	return 0;
}