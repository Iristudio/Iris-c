#include<iostream>
using namespace std;

int main(){
	//do...while��while�������� do...while����ִ��һ��ѭ�����
	int a = 0;
	do
	{
		cout << a << endl;
		a++;
	} while (a);//do...while������� �������ѭ��
	//��Ϊdo...while�Ƚ�����һ��ѭ��ʹ��a��ֵ��Ϊ0 Ȼ��Ϳ�ʼ��ѭ����

	while (a) {//while������� �������ѭ�� ��Ϊa��ֵΪ0�Ǽٵ� while����ִ��
		cout << a << endl;
		a++;
	}




	system("pause");
	return 0;
}