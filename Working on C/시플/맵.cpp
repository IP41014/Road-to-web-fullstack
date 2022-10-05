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

	person["박동규"] == 22;
	person["이창현"] == 30;

	while (true) {
		cout << "이름 입력 : ";
		cin >> name;
		if (name == "q") 
			break;
		it = person.find(name);
		if (it == person.end()) {
			cout << "그런 사람은 없습니다." << endl;
		}
		else {
			cout << it->first << ". " << it->second << endl;
		}
		
	}
}