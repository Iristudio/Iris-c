#include<iostream>
using namespace std;

int main() {
	//continue�������ѭ��֮�� ��ѭ�����е�continue����֮��ͻ�����֮��� ��ʼִ���´�һ��ѭ��
	


	for (int i = 0;i < 100;i++) {
		if (i % 2 == 0) {
			continue;//����ɸѡ���� ִ�е��˾Ͳ������������� ȥִ����һ��ѭ����
			//�������дbreak �ͻ�ֱ���˳�ѭ���� ��Ϊ0��ż��
		}
		cout << i << endl;
	}



}