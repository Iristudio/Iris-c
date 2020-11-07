#include<iostream>
using namespace std;

int main(){
	int a = 100;
	do
	{
		int b = 0;
		int c = 0;
		int d = 0;//注意要写在循环内 不然是按照a == 100来算的

		b = a % 10;//个位数
		c = a / 10 % 10;//十位数
		d = a / 100;//百位数
		if (b*b*b + c*c*c + d*d*d == a) {
			cout << a << endl;
		}
		a++;
	} while (a < 1000);
	

	system("pause");
	return 0;


}