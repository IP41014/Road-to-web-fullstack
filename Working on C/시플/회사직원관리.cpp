#include<iostream>
#include<string.h>


//�λ���� C++,��

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

	cout << "Employ ������ ȣ��" << endl;
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
	cout << "�̸� : " << strName << endl;
	cout << "�ּ� : " << strAddr << endl;
}

Regular::Regular() {

}

Regular::Regular(const char* pName, const char* pAddr, double dSalary) { //: Employee(pName, pAddr) {
	cout << "Regular ������ ȣ��" << endl;
	this->strName = pName;
	this->strAddr = pAddr;
	this->salary = dSalary;
	cout << "�̸� : " << this->strName << endl;
	cout << "�ּ� : " << this->strAddr << endl;
	cout << "�޿� : " << this->salary << endl;
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