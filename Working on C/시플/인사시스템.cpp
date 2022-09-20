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

class Regular : public Employee //��������
{
public:
	Regular();
	Regular(const char *pName, const char*pAddr, double dSalary);
	~Regular();
	double PayCheck() const;
protected:
	double salary;
};

class Temporary : public Employee //�������
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
	//���� �߰�
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
	cout << "Employee ������ ȣ��" << endl;
	//strName = new char[strlen(pName)+1];
	//strAddr = new char[strlen(pAddr)+1];
	//strcpy_s(strName, strlen(pName) + 1, pName);
	//strcpy_s(strAddr, strlen(pAddr) + 1, pAddr);
}
Employee::~Employee()
{
	cout << "Employee �Ҹ��� ȣ��" << endl;
	//delete strName;
	//delete strAddr;
}
void Employee::DisplayEmployee()
{
	cout << "�̸� : " << strName << endl;
	cout << "�ּ� : " << strAddr << endl;
}

Regular::Regular()
{
}
Regular::Regular(const char* pName, const char* pAddr, double dSalary)
{
	cout << "Regular ������ ȣ��" << endl;
	this->strName = pName;
	this->strAddr = pAddr;
	this->salary = dSalary;
	cout << "�̸� : " << this->strName << endl;
	cout << "�ּ� : " << this->strAddr << endl;
	//cout << "�޿� : " << this->salary << endl;
}
Regular::~Regular()
{
	cout << "Regular �Ҹ��� ȣ��" << endl;
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
	cout << "Temporary ������ ȣ��" << endl;
	this->strName = pName;
	this->strAddr = pAddr;
	this->dailypay = dDailyPay;
	this->days = nDays;
	cout << "�̸� : " << this->strName << endl;
	cout << "�ּ� : " << this->strAddr << endl;
	//cout << "�޿� : " << dailypay * days << endl;
}
Temporary::~Temporary()
{
	cout << "Temporary �Ҹ��� ȣ��" << endl;
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
	cout << "SalesMan ������ ȣ��" << endl;
	this->allowance = allowance;
	cout << "�̸� : " << this->strName << endl;
	cout << "�ּ� : " << this->strAddr << endl;
}
SalesMan::~SalesMan()
{
	cout << "SalesMan �Ҹ��� ȣ��" << endl;
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
	cout<<"�޿� : " << rgl.PayCheck()<< endl;

	SalesMan slm("park", "kasan", 300, 50);
	cout << "�޿� : " << slm.PayCheck() << endl;

	//Temporary tmp("kim", "suwon", 10, 30);
	//cout << "�޿� : " << tmp.PayCheck() << endl;
}