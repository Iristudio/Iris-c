#include<iostream>
using namespace std;

int main() {
	//break��ʹ��ʱ��
	//1������switch�����
	cout << "��ѡ���Ѷ�" << endl;
	cout << "1.���Ѷ�" << endl;
	cout << "2.��ͨ�Ѷ�" << endl;
	cout << "3.�����Ѷ�" << endl;
	cout << "4.�����Ѷ�" << endl;


	int a = 0;
	cin >> a;
	switch (a) {
	case 1:
		cout << "��ѡ��ļ��Ѷ�" << endl;
		break;//�˳�switch��� ���˳�������� ����case��֧ �����дbreak�ͻ�һֱִ����ȥ
	case 2:
		cout << "��ѡ�����ͨ�Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ��������Ѷ�" << endl;
		break;
	case 4:
		cout << "��ѡ��ĵ����Ѷ�" << endl;
		break;
	default:
		cout << "�����ӿ� ��." << endl;
		break;
	}

	//2.��ѭ�������

	for (int i = 0;i < 10;i++) {
		if (i == 5) {
			break;//ʹ��break ����ѭ��
		}
		cout << i << endl;
	}

	//3.��Ƕ��ѭ�����
	for (int a = 0;a < 10;a++) {
		for (int i = 0;i < 10;i++) {
			if(i=5){
				break;
			}
		cout << "* ";
		}
		cout << endl;
}

	system("pause");
	return 0;
}