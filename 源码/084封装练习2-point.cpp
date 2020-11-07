#include "point.h"


void point::setx2(int xs2) {//需要告诉它是在point类下的函数 point已经在头文件声明
	x2 = xs2;
}

void point::sety2(int ys2) {
	y2 = ys2;
}

int point::getx2() {
	return x2;
}

int point::gety2() {
	return y2;
}