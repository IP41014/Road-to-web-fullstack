#include<iostream>
#include<string.h>

using namespace std;

class Employee {
public:
	Employee();
	Employee(const char* pName, const char* pAddr);
	~Employee();
	void DisplayEmployee();
private:
	char* strName;
	char* strAddr;
};

class Regular : Employee {
public:
	Regular();
	Regular(const char* pName, const char* pAddr, double dSalary);
	~Regular();
	double PayCheck() const;
private:
	double salary;
};

Employee::Employee() {
	strName = NULL;
	strAddr = NULL;
}

Employee::Employee(const char* pName, const char* pAddr) {
	strName = new char[strlen(pName) + 1];
	strAddr = new char[strlen(pAddr) + 1];
	strcpy_s(strName, strlen(pName) + 1, pName);
	strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
}

Employee::~Employee() {
	delete strName;
	delete strAddr;
}

void Employee::DisplayEmployee() {
	cout << "이름 : " << strName << endl;
	cout << "주소 : " << strAddr << endl;
}

void main() {
	Employee emp("Park", "SEOUL");
	emp.DisplayEmployee();
}