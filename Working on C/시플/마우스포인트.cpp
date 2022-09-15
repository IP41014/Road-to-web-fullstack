#include<iostream>

class MousePoint {
private:
	int x;
	int y;

public:
	void SetXY(int nX, int nY); //함수의 원형
};

void MousePoint :: SetXY(int nX, int nY) { //함수의 정의
	x = nX;
	y = nY;
}

void main() {
	MousePoint pt;
	pt.SetXY(10, 20);
}