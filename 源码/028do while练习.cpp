#include<iostream>
using namespace std;

int main(){
	int a = 100;
	do
	{
		int b = 0;
		int c = 0;
		int d = 0;//ע��Ҫд��ѭ���� ��Ȼ�ǰ���a == 100�����

		b = a % 10;//��λ��
		c = a / 10 % 10;//ʮλ��
		d = a / 100;//��λ��
		if (b*b*b + c*c*c + d*d*d == a) {
			cout << a << endl;
		}
		a++;
	} while (a < 1000);
	

	system("pause");
	return 0;


}