#include<iostream>
#include<string.h>

using namespace std;

class String {

private:
	char* pBuffer;
	int nLength;

public:
	String(char ch, int size);
	~String();
	void operator=(String& str1);
	void SetData();
	String(String& str1);
};

String::String(String& str1) {
	this->nLength = str1.nLength;
	this->pBuffer = new char[this->nLength + 1];
	strcpy_s(this->pBuffer, this->nLength + 1, str1.pBuffer);
}

String::String(char ch, int nSize) {
	nLength = nSize;
	pBuffer = new char[nLength + 1];
	memset(pBuffer, ch, nLength);
	pBuffer[nLength] = '\0';
	cout << "pBuffer : " << pBuffer << endl;
	cout << "nLength : " << nLength << endl;
}

String::~String() {
	delete pBuffer;
}

void String::operator=(String& str1) {
	if (&str1 == this)
		return;
	delete this->pBuffer;
	this->nLength = str1.nLength;
	this->pBuffer = new char[this->nLength + 1];
	strcpy_s(this->pBuffer, this->nLength + 1, str1.pBuffer);
}

void String::SetData() {
	cout << "pBuffer : " << this->pBuffer << endl;
	cout << "nLength : " << this->nLength << endl;

}

void main() {

	//대입 연산자 오버로딩
	//String str1('A', 3);
	//String str2('B', 5);
	//cout << "대입 전" << endl;
	//str2.SetData();
	//str2 = str1; //str2.operator=(str1);
	//cout << "대입 후" << endl;
	//str2.SetData();

	//복사생성자
	String str1('A', 3);
	String str2 = str1;
	cout << "대입 후 str2" << endl;
	str2.SetData();
}