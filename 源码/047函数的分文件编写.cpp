#include<iostream>
using namespace std;
#include"swap.h"


//�����ķ��ļ���д�������� 
/*1.����.h��ͷ�ļ�
* 2.��ͷ�ļ���д�����������Լ�#include<iostream> �� using namespace std;
* 3.����.cppԴ�ļ� 
* 4.��Դ�ļ���д�����Ķ��� �ǵ�Ҫ��ǰ���#include<ͷ�ļ���.h> �����������Ż�֪�����Դ�ļ���ͷ�ļ��й�ϵ ������Ҫд#include<iostream> �� using namespace std;��
* 5.�����ļ��е��ú���ʱ Ҳ��Ҫ��ǰ��д#include<ͷ�ļ���.h> Ȼ����main�����е��ü���
*/
int main() {
	int a = 10;
	int b = 20;

	swap(a, b);


	system("pause");
	return 0;



}