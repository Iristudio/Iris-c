#include<iostream>
using namespace std;
#include <string>

int main() {
	//���ݵ����� ͨ����������ȡ����
	//�ؼ��� cin
	//�﷨ cin >> ����

	//����
	int a = 10;
	cout << "������ͱ�����ֵ" << endl;
	cin >> a;
	cout << "��ǰ���ͱ�����ֵ��" << a << endl;

	//������
	float f = 3.14f;
	cout << "��������ͱ�����ֵ" << endl;
	cin >> f;
	cout << "��ǰ�����ͱ�����ֵ��" << f << endl;

	//�ַ���
	char ch = 'a';
	cout << "����ַ��ͱ�����ֵ" << endl;
	cin >> ch;
	cout << "��ǰ�ַ��ͱ�����ֵ��" << ch << endl;

	//�ַ�����
	string str= "hello";
	cout << "����ַ����ͱ�����ֵ" << endl;
	cin >> str;
	cout << "��ǰ���ͱ�����ֵ��" << str << endl;

	//������
	bool flag = false;
	cout << "��������ͱ�����ֵ" << endl;
	cin >> flag;
	cout << "��ǰ�����ͱ�����ֵ��" << flag << endl;//Ĭ�ϳ���0���ⶼ��true


	system("pause");
	return 0;

}