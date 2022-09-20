#include<iostream>

using namespace std;

void divide(int argA, int argB) {
	if (argB == 0) throw argB;
	cout << "나누기 결과 " << argA / argB << endl;
}

void main() {
	int a, b;
	cout << "나누어질 수 입력 : ";
	cin >> a;
	cout << "나누는 수 입력 : ";
	cin >> b;

	
	try {
		if (b == 0) throw b;
		cout << "나누기 결과" << a / b << endl;
	}
	catch(int e) {
		cout << "나누는 수에" << e <<  "이 입력되었습니다" << endl;
	}	
	
	catch(const char* msg) {
		cout << msg << endl;
	}

}