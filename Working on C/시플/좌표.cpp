#include<iostream>

using namespace std;

class MousePoint {
private:
	int x;
	int y;
public:
	int getX();
	int getY();
	void SetXY(int nX, int nY); //�Լ��� ����
};

int MousePoint :: getX() {
	return x;
}
int MousePoint :: getY() {
	return y;
}

void MousePoint::SetXY(int nX, int nY) { //�Լ��� ����
	x = nX;
	y = nY;
}

void main() {
	MousePoint pt;
	pt.SetXY(10, 20);
	cout << "x��ǥ : " << pt.getX() << endl;
	cout << "x��ǥ : " << pt.getY() << endl;
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
//		cout << "��ü ���� ���� : " << nCount << endl;
//	}
//	~Deposit() {
//		nCount--;
//		cout << "��ü �Ҹ� ���� : " << nCount << endl;
//	}
//
//	Deposit(const char* name, double balance) {
//		
//	}
//	void BankBalance() {
//		dBalance = dBalance + (dBalance )
//	}
//};