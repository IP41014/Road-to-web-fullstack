#include<iostream>

using namespace std;

class MousePoint {
private:
	int x;
	int y;
public:
	int getX();
	int getY();
	void SetXY(int nX, int nY); //함수의 원형
};

int MousePoint :: getX() {
	return x;
}
int MousePoint :: getY() {
	return y;
}

void MousePoint::SetXY(int nX, int nY) { //함수의 정의
	x = nX;
	y = nY;
}

void main() {
	MousePoint pt;
	pt.SetXY(10, 20);
	cout << "x좌표 : " << pt.getX() << endl;
	cout << "x좌표 : " << pt.getY() << endl;
}


//class Deposit {
//private:
//	const char* strName;
//	double dBalance;
//	static double dinterestate;
//	static int nCount;
//
//public:
//	Deposit() {
//		nCount = 0;
//		nCount++;
//		cout << "객체 생성 개수 : " << nCount << endl;
//	}
//	~Deposit() {
//		nCount--;
//		cout << "객체 소멸 개수 : " << nCount << endl;
//	}
//
//	Deposit(const char* name, double balance) {
//		
//	}
//	void BankBalance() {
//		dBalance = dBalance + (dBalance )
//	}
//};