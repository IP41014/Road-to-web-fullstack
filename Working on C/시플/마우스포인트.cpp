#include<iostream>

class MousePoint {
private:
	int x;
	int y;

public:
	void SetXY(int nX, int nY); //�Լ��� ����
};

void MousePoint :: SetXY(int nX, int nY) { //�Լ��� ����
	x = nX;
	y = nY;
}

void main() {
	MousePoint pt;
	pt.SetXY(10, 20);
}