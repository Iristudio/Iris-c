#include<iostream>
#include<string>
using namespace std;

int main() {

	//����if���
	int b = 0;
	cout << "���������Ĵ��" << endl;
	cin >> b;
	cout << "���Ĵ����:" <<b<< endl;

	if (b > 0) {
		cout << "���Ǹ���Ǯ��" << endl;
	}

	//����if���
	int a = 0;
	cout << "���������:" << endl;
	cin >> a;
	cout << "������ķ�����" << a << endl;

	if (a > 600) {//if���治Ҫд�ֺ� ֱ��д{
		cout << "��������һ����ѧ" << endl;
	}
	else {
		cout << "��δ����һ����ѧ" << endl;
	}
	//������if���
	string wife = "none";
	cout << "��������������" << endl;
	cin >> wife;
	cout << "����������" << endl;
	if (wife == "ѩ��") {
		cout << "��������" << endl;
	}
	else if (wife == "����") {
		cout << "������" <<endl;
	}
	else if (wife == "һɫ") {
		cout << "�� �� ���վ���ȥ��" << endl;
	}
	else {
		cout << "ϴϴ˯�� ��û������" << endl;
	}

	//Ƕ��if���
	int m = 0;
	cout << "�������������:" << endl;
	cin >> m;

	if (m < 100) {
		cout << "���" << endl;
		if (m < 10) {
			cout << "����е�ս����" << endl;
		}
		else {
			cout << "���� �Ҳ���Ŭ����" << endl;
		}
	}
	else if(m > 100){
		cout << "�����Ұ� ��ϲ��Ǯ��" << endl;
	}

	system("pause");
	return 0;
}