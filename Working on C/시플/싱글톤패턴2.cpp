#include<iostream>
#include<crtdbg.h>

using namespace std;

//µ¿Àû ½Ì±ÛÅæ
class SingletonClass
{
private:
	int total;
	static SingletonClass* instance;
	SingletonClass() {
		total = 0;
	}
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
	void AddValue(int value)
	{
		total = total + value;
	}
	int getTotalValue()
	{
		return total;
	}
	void destroy()
	{
		if (instance != NULL)
		{
			delete instance;
			instance = NULL;
			cout << "instance ÇØÁ¦" << endl;
		}
	}
};

SingletonClass* SingletonClass::instance = NULL;

void main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	SingletonClass::getInstance()->ShowMessage();
	SingletonClass::getInstance()->destroy();
}