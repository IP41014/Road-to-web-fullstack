#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
public:
	Employee();
	Employee(const char* pName, const char* pAddr);
	~Employee();
	void DisplayEmployee();
	double PayCheck() const
	{
		return 0.0;
	}
protected:
	const char* strName;
	const char* strAddr;
};

class Regular : public Employee //정규직원
{
public:
	Regular();
	Regular(const char *pName, const char*pAddr, double dSalary);
	~Regular();
	double PayCheck() const;
protected:
	double salary;
};

class Temporary : public Employee //계약직원
{
public:
	Temporary();
	Temporary(const char* pName, const char* pAddr, double dDailyPay, int nDays);
	~Temporary();
	double PayCheck() const;
private:
	double dailypay;
	int days;
};

class SalesMan : public Regular
{
public:
	SalesMan();
	SalesMan(const char* pName, const char* pAddr, double dSalary, double allowance);
	~SalesMan();
	//수당 추가
	double PayCheck() const;
private:
	double allowance;
};


Employee::Employee()
{
	strName = NULL;
	strAddr = NULL;
}
Employee::Employee(const char* pName, const char* pAddr)
{
	cout << "Employee 생성자 호출" << endl;
	//strName = new char[strlen(pName)+1];
	//strAddr = new char[strlen(pAddr)+1];
	//strcpy_s(strName, strlen(pName) + 1, pName);
	//strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
}
Employee::~Employee()
{
	cout << "Employee 소멸자 호출" << endl;
	//delete strName;
	//delete strAddr;
}
void Employee::DisplayEmployee()
{
	cout << "이름 : " << strName << endl;
	cout << "주소 : " << strAddr << endl;
}

Regular::Regular()
{
}
Regular::Regular(const char* pName, const char* pAddr, double dSalary)
{
	cout << "Regular 생성자 호출" << endl;
	this->strName = pName;
	this->strAddr = pAddr;
	this->salary = dSalary;
	cout << "이름 : " << this->strName << endl;
	cout << "주소 : " << this->strAddr << endl;
	//cout << "급여 : " << this->salary << endl;
}
Regular::~Regular()
{
	cout << "Regular 소멸자 호출" << endl;
}
double Regular::PayCheck() const
{
	return this->salary;
}


Temporary::Temporary()
{
}
Temporary::Temporary(const char* pName, const char* pAddr, double dDailyPay, int nDays):Employee(pName, pAddr)
{
	cout << "Temporary 생성자 호출" << endl;
	this->strName = pName;
	this->strAddr = pAddr;
	this->dailypay = dDailyPay;
	this->days = nDays;
	cout << "이름 : " << this->strName << endl;
	cout << "주소 : " << this->strAddr << endl;
	//cout << "급여 : " << dailypay * days << endl;
}
Temporary::~Temporary()
{
	cout << "Temporary 소멸자 호출" << endl;
}
double Temporary::PayCheck() const
{
	return dailypay * days;
}

SalesMan::SalesMan()
{
}
SalesMan::SalesMan(const char* pName, const char* pAddr, double dSalary, double allowance):Regular(pName, pAddr, dSalary)
{
	cout << "SalesMan 생성자 호출" << endl;
	this->allowance = allowance;
	cout << "이름 : " << this->strName << endl;
	cout << "주소 : " << this->strAddr << endl;
}
SalesMan::~SalesMan()
{
	cout << "SalesMan 소멸자 호출" << endl;
}
double SalesMan::PayCheck() const
{
	return Regular::PayCheck() + this->allowance;
}

void main()
{
	//Employee emp("lee", "seoul");
	//emp.DisplayEmployee();

	Regular rgl("lee", "seoul", 300);
	cout<<"급여 : " << rgl.PayCheck()<< endl;

	SalesMan slm("park", "kasan", 300, 50);
	cout << "급여 : " << slm.PayCheck() << endl;

	//Temporary tmp("kim", "suwon", 10, 30);
	//cout << "급여 : " << tmp.PayCheck() << endl;
}