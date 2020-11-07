#pragma once
#include <iostream>
using namespace std;

class point {//头文件只放声明就好了
public:
	void setx2(int xs2);

	void sety2(int ys2);

	int getx2();

	int gety2();

private:
	int x2;
	int y2;
};