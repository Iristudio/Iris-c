#include<iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "������aС�������:" << endl;
	cin >> a;
	cout << "������bС�������:" << endl;
	cin >> b;
	cout << "������cС�������:" << endl;
	cin >> c;

	if (a > b) {
		if (a > c) {
			cout << "aС������" << endl;
		}
		else if (a < c) {
			cout << "cС������" << endl;
		}
		else {
			cout << "a��cһ���� ����b��";
		}
	}
	else if (a < b) {
		if (b > c) {
			cout << "bС������" << endl;
		}
		else if (b < c) {
			cout << "cС������" << endl;
		}
		else {
			cout << "b��cһ���� ����a��";
		}
	}
	else if(a == b) {
		if (a == c) {
			cout << "��ֻС��һ����" << endl;
		}
		else if (a > c) {
			cout << "a��bһ���� ��c��"<<endl;
		}
		else {
			cout << "cС������"<<endl;
		}
	}



}