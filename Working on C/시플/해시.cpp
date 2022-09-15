#include<stdio.h>
#include<string.h>

#define BK 10
#define SL 1000

int hashtable[BK][SL];

int Hash(int key) {
	
	int rest = key % 10;
	return rest;
}


void insertValue(int key) {

	int bucket = Hash(key);
	printf("bucket = %d\n", bucket);

	for (int i = 0; i < SL; i++) {
		if (hashtable[bucket][i] == 0) {
			hashtable[bucket][i] = key;
			break;
		}
	}
}

bool findValue(int key) {

	int bucket = Hash(key);

	for (int i = 0; i < SL; i++) {

		if (hashtable[bucket][0] == key) {
			return true;
		}
	}
}

void main() {

	int data = 0;
	memset(hashtable, 0, sizeof(hashtable));
	printf("키를 5개 입력하세요 : \n");

	for (int i = 0; i < 5; i++) {
		printf("%d번째 값을 입력하세요 : ", i + 1);
		scanf_s("%d", &data);

		insertValue(data);
	}
	printf("검색할 키를 입력하세요\n");
	scanf_s("%d", &data);
	
	bool search = findValue(data);

	if (search) {
		printf("검색되었습니다. \n");
	}
	else {
		printf("검색되지 않았습니다. \n");
	}

	//printf("hash 테이블 출력\n");

	//for (int i = 0; i < 10; i++) {
	//	printf("hashtable = %d\n", hashtable[i][0]);
	//}

}