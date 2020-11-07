#pragma once
#include <iostream>
using namespace std;
#include "point.h"

class circle {
public:
	void setcenter(point center1);
	point getcenter();

	void setr(int rs1);

	int getr();
private:
	int r;
	point center;
};