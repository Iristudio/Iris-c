#include<iostream>
using namespace std;

//��c++�� struct��class��Ψһ���������Ĭ�ϵķ���Ȩ�޲�ͬ
//���� structĬ��Ȩ��Ϊ����
//	   class Ĭ��Ȩ��Ϊ˽��

class test1 {
	int num1;//������ û��дȨ��
};

struct test2 {
	int num2;
};

int main() {
	test1 a1;
	test2 b1;

	//a1.num1 = 0;  ��ôд �ᱨ�� �����Ա�������ǲ��ɷ��ʵ�
	b1.num2 = 41000;

	system("pause");
	return 0;
}
