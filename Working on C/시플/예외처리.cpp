#include<iostream>

using namespace std;

void divide(int argA, int argB) {
	if (argB == 0) throw argB;
	cout << "������ ��� " << argA / argB << endl;
}

void main() {
	int a, b;
	cout << "�������� �� �Է� : ";
	cin >> a;
	cout << "������ �� �Է� : ";
	cin >> b;

	
	try {
		if (b == 0) throw b;
		cout << "������ ���" << a / b << endl;
	}
	catch(int e) {
		cout << "������ ����" << e <<  "�� �ԷµǾ����ϴ�" << endl;
	}	
	
	catch(const char* msg) {
		cout << msg << endl;
	}

}