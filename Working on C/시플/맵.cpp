#include<iostream>
#include<vector>
#include<deque>
#include<set>
#include<list>
#include<map>

using namespace std;

void main() {
	map<string, int> person;
	map<string, int> :: iterator it;
	string name;

	person["�ڵ���"] == 22;
	person["��â��"] == 30;

	while (true) {
		cout << "�̸� �Է� : ";
		cin >> name;
		if (name == "q") 
			break;
		it = person.find(name);
		if (it == person.end()) {
			cout << "�׷� ����� �����ϴ�." << endl;
		}
		else {
			cout << it->first << ". " << it->second << endl;
		}
		
	}
}