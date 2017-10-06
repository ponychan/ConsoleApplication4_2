// ConsoleApplication42.cpp: 定义控制台应用程序的入口点。
//4.2.cpp

#include "stdafx.h"
#include<iostream>
using namespace std;

class point {
public:
	point(int xx = 0, int yy = 0) {
		x = xx;
		y = yy;
	}
	point(point &p);
	int getx() {
		return x;
	}
	int gety() {
		return y;
	}
private:
	int x, y;
};

//成员函数的实现
point::point(point &p) {
	x = p.x;
	y = p.y;
	cout << "calling the copy constructor" << endl;
}

void fun1(point p) {
	cout << p.getx() << endl;
}

point fun2() {
	point a(1, 2);
	return a;
}

int main()
{
	point a(4, 5);
	point b = a;
	cout << b.getx() << endl;
	fun1(b);
	b = fun2();
	cout << b.getx() << endl;
	return 0;
}

