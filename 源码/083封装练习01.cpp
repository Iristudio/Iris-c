#include<iostream>
using namespace std;

class cube {
public:	
	/*void canshu(int l1, int h1, int w1){
		l = l1;
		h = h1;
		w = w1;
		}
	*/

	void setl(int l1) {
		l = l1;
	}

	void setw(int w1) {
		w = w1;
	}

	void seth(int h1) {
		h = h1;
	}

	int getl() {
		return l;
	}

	int getw() {
		return w;
	}
	int geth() {
		return h;
	}

	int mianji() {
		return 2*(l * h) + 2*(l * w) + 2*(h * w);
	}

	int tiji() {
		return (l * h * w);
	}
	//���ó�Ա�����жϵĽ���
	bool intwocube(cube c) {
		if (h == c.geth() &&
			l == c.getl() &&
			w == c.getw()) {
			return true;
		}
		else {
			return false;
		}
	}

private:
	int l;
	int h;
	int w;
};

//����ȫ�ֺ����жϵĽ�� 
bool twocube(cube c1,cube c2) {
	if (c1.geth() == c2.geth() &&
		c1.getl() == c2.getl() &&
		c1.getw() == c2.getw()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	cube c9;
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "�����볤����ĸ�" << endl;
	cin >> a;
	cout << "�����볤����ĳ�" << endl;
	cin >> b;
	cout << "�����볤����Ŀ�" << endl;
	cin >> c;
	
	c9.setl(b);
	c9.seth(a);
	c9.setw(c);


	cout << "�����" << c9.mianji() << endl;

	cout << "�����" << c9.tiji() << endl;

	cube c8;
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;

	cout << "������ڶ���������ĸ�" << endl;
	cin >> a1;
	cout << "������ڶ���������ĳ�" << endl;
	cin >> b1;
	cout << "������ڶ���������Ŀ�" << endl;
	cin >> c1;

	c8.setl(b1);
	c8.seth(a1);
	c8.setw(c1);


	
	if (twocube(c9, c8) == 1) {
		cout << "ȫ�� ����������һģһ��" << endl;
	}
	else {
		cout << "ȫ�� ���������岻ͬ" << endl;
	}


	c9.intwocube(c8);
	if (c9.intwocube(c8) == 1) {
		cout << "��Ա ����������һģһ��" << endl;
	}
	else {
		cout << "��Ա ���������岻ͬ" << endl;
	}

	system("pause");
	return 0;
}
