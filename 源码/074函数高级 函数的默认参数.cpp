#include<iostream>
using namespace std;
//��c++��,�������β��ǿ�����Ĭ��ֵ��
//�﷨:
//����ֵ���� ������ (���� = Ĭ��ֵ) {}
int func(int a,int b = 20,int c = 30) {//������Ǵ������� �������Ǵ�������� ���û�� ����Ĭ��ֵ
	return a + b + c;
}
//int test(int a,int b = 10,int c,int d) { //�����ǻᱨ���
//ע�� ������β��� һ��λ������Ĭ��ֵ �����ֵ��Ҫ��Ĭ��ֵ 

//}

//�������������Ĭ�ϲ��� ����ʵ�־Ͳ�����Ĭ�ϲ���
//����������ʵ��ֻ��һ����Ĭ�ϲ���
int func2(int a = 10, int b = 20);

int func2(int a,int b) {

}

int main() {
	cout << func(10, 30) << endl;




	system("pause");
	return 0;
}
