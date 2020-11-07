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
	//利用成员函数判断的结结果
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

//利用全局函数判断的结果 
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

	cout << "请输入长方体的高" << endl;
	cin >> a;
	cout << "请输入长方体的长" << endl;
	cin >> b;
	cout << "请输入长方体的宽" << endl;
	cin >> c;
	
	c9.setl(b);
	c9.seth(a);
	c9.setw(c);


	cout << "面积是" << c9.mianji() << endl;

	cout << "体积是" << c9.tiji() << endl;

	cube c8;
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;

	cout << "请输入第二个长方体的高" << endl;
	cin >> a1;
	cout << "请输入第二个长方体的长" << endl;
	cin >> b1;
	cout << "请输入第二个长方体的宽" << endl;
	cin >> c1;

	c8.setl(b1);
	c8.seth(a1);
	c8.setw(c1);


	
	if (twocube(c9, c8) == 1) {
		cout << "全局 两个长方体一模一样" << endl;
	}
	else {
		cout << "全局 两个长方体不同" << endl;
	}


	c9.intwocube(c8);
	if (c9.intwocube(c8) == 1) {
		cout << "成员 两个长方体一模一样" << endl;
	}
	else {
		cout << "成员 两个长方体不同" << endl;
	}

	system("pause");
	return 0;
}
