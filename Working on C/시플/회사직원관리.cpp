#include<iostream>
#include<string.h>


//인사관리 C++,ㅡ

using namespace std;

class Employee {
public:
	Employee();
	Employee(const char* pName, const char* pAddr);
	~Employee();
	void DisplayEmployee();
protected:
	const char* strName;
	const char* strAddr;
};

class Regular : public Employee {
public:
	Regular();
	Regular(const char* pName, const char* pAddr, double dSalary);
	~Regular();
	double PayCheck() const;
private:
	double salary;
};

class Temporary : Employee {
public:
	Temporary();
	Temporary(const char* pName, const char* pAddr, double dDailyPay, int nDays);
	~Temporary();
	double PayCheck() const;
private:
	double dailypay;
	int days;
};

Employee::Employee() {
	strName = NULL;
	strAddr = NULL;
}

Employee::Employee(const char* pName, const char* pAddr) {

	cout << "Employ 생성자 호출" << endl;
	//strName = new char[strlen(pName) + 1];
	//strAddr = new char[strlen(pAddr) + 1];
	//strcpy_s(strName, strlen(pName) + 1, pName);
	//strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
}

Employee::~Employee() {
	delete strName;
	delete strAddr;
}

void Employee::DisplayEmployee() {
	cout << "이름 : " << strName << endl;
	cout << "주소 : " << strAddr << endl;
}

Regular::Regular() {

}

Regular::Regular(const char* pName, const char* pAddr, double dSalary) { //: Employee(pName, pAddr) {
	cout << "Regular 생성자 호출" << endl;
	this->strName = pName;
	this->strAddr = pAddr;
	this->salary = dSalary;
	cout << "이름 : " << this->strName << endl;
	cout << "주소 : " << this->strAddr << endl;
	cout << "급여 : " << this->salary << endl;
}

Regular::~Regular() {

}

double Regular::PayCheck() const {
	return this->salary;
}

Temporary::Temporary() {

}

Temporary::Temporary(const char* pName, const char* pAddr, double dDailyPay, int nDays) {

}

Temporary::~Temporary() {

}

double Temporary::PayCheck() const {
	return dailypay * days;
}

void main() {
	//Employee emp("Park", "SEOUL");
	//emp.DisplayEmployee();

	Regular rgl("park", "seoul", 300);
}