#include<iostream>
#include<vector>
#include<deque>
#include<set>
#include<list>

using namespace std;

void main() {
	int arr[] = { 1,2,3,2,6,5,3 };
	const char* strtmp = "fjaslkdsakljflk";
	set<char> scon(&strtmp[0], &strtmp[16]);
	set<char>::iterator it;

	//int 용
	//for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
	//	scon.insert(arr[i]);
	//}

	//반복자 코드
	for (it = scon.begin(); it != scon.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}