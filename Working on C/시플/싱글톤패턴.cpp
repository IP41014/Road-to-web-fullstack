#include<iostream>

using namespace std;

//µ¿Àû ½Ì±ÛÅæ
class SingletonClass
{
private:
	static SingletonClass* instance;
	SingletonClass() {}
	~SingletonClass() {}
public:
	static SingletonClass* getInstance()
	{
		if (!instance)
		{
			instance = new SingletonClass();
		}
		
		return instance;
	}
	void ShowMessage()
	{
		cout << "Sington Pattern" << endl;
	}
};

SingletonClass* SingletonClass::instance = NULL;

void main()
{
	SingletonClass::getInstance()->ShowMessage();
}