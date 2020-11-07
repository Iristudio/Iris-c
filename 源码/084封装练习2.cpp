#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"


//已经分文件编写了
//class point {
//public:
//	void setx2(int xs2) {
//		x2 = xs2;
//	}
//
//	void sety2(int ys2) {
//		y2 = ys2;
//	}
//
//	int getx2() {
//		return x2;
//	}
//
//	int gety2() {
//		return y2;
//	}
//
//private:
//	int x2;
//	int y2;
//};

//class circle {
//public:
//	void setcenter(point center1) {
//		center = center1;
//	}
//	point getcenter() {
//		return center;
//	}
//
//	void setr(int rs1) {
//		r = rs1;
//	}
//
//	int getr() {
//		return r;
//	}
//
//private:
//	int r;
//	point center;
//};

void incircle(circle &c,point &p) {
	//计算两点间距离
	int l = 0;
	l = (c.getcenter().getx2() - p.getx2()) * (c.getcenter().getx2() - p.getx2()) +
		(c.getcenter().gety2() - p.gety2()) * (c.getcenter().gety2() - p.gety2());
	int r = c.getr() * c.getr();
	if (l > r) {
		cout << "点(" << p.getx2() << "," << p.gety2() << ")在圆外" << endl;
	}
	else if (l  == r) {
		cout << "点(" << p.getx2() << "," << p.gety2() << ")在圆上" << endl;
	}
	else if (l < r) {
		cout << "点(" << p.getx2() << "," << p.gety2() << ")在圆内" << endl;
	}
}

int main() {
	circle c1;
	point p1;
	point p2;

	p2.setx2(0);
	p2.sety2(0);
	c1.setcenter(p2);

	int difr = 0;
	cout << "请输入圆的半径" << endl;
	cin >> difr;
	c1.setr(difr);

	int x = 0;
	int y = 0;
	cout << "请输入点的横坐标:" << endl;
	cin >> x;
	cout << "请输入点的纵坐标:" << endl;
	cin >> y;
	
	p1.setx2(x);
	p1.sety2(y);


	cout << "当圆心在(0,0)时" << endl;
	incircle(c1, p1);

	system("pause");
	return 0;
}
