#include<stdio.h>
#include<string.h>


//�ؽ� C��� (C++ �ƴ�)

//#define BK 10
//#define SL 1000
//
//int hashtable[BK][SL];
//
//int Hash(int key) {
//	
//	int rest = key % 10;
//	return rest;
//}
//
//
//void insertValue(int key) {
//
//	int bucket = Hash(key);
//	printf("bucket = %d\n", bucket);
//
//	for (int i = 0; i < SL; i++) {
//		if (hashtable[bucket][i] == 0) {
//			hashtable[bucket][i] = key;
//			break;
//		}
//	}
//}
//
//bool findValue(int key) {
//
//	int bucket = Hash(key);
//
//	for (int i = 0; i < SL; i++) {
//
//		if (hashtable[bucket][0] == key) {
//			return true;
//		}
//	}
//}
//
//void main() {
//
//	int data = 0;
//	memset(hashtable, 0, sizeof(hashtable));
//	printf("Ű�� 5�� �Է��ϼ��� : \n");
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d��° ���� �Է��ϼ��� : ", i + 1);
//		scanf_s("%d", &data);
//
//		insertValue(data);
//	}
//	printf("�˻��� Ű�� �Է��ϼ���\n");
//	scanf_s("%d", &data);
//	
//	bool search = findValue(data);
//
//	if (search) {
//		printf("�˻��Ǿ����ϴ�. \n");
//	}
//	else {
//		printf("�˻����� �ʾҽ��ϴ�. \n");
//	}
//
//	//printf("hash ���̺� ���\n");
//
//	//for (int i = 0; i < 10; i++) {
//	//	printf("hashtable = %d\n", hashtable[i][0]);
//	//}
//
//}


//�ؽ� ���� Ž��
#define BK 10
#define SL 1

int hashtable[BK][SL];

int Hash(int key) {

	int rest = key % 10;
	return rest;
}


void insertValue(int key) {

	int bucket = Hash(key);
	while (hashtable[bucket][0] != 0) {
		bucket += 1;
	}
	hashtable[bucket][0] == key;

}

bool findValue(int key) {

	int bucket = Hash(key);

	while (hashtable[bucket][0] != 0) {
		if (hashtable[bucket][0] == key) {
			return true;
		}
		bucket += 1;
	}
	hashtable[bucket][0] == key;
}



void main() {

	int data = 0;
	memset(hashtable, 0, sizeof(hashtable));
	printf("Ű�� 5�� �Է��ϼ��� : \n");

	for (int i = 0; i < 5; i++) {
		printf("%d��° ���� �Է��ϼ��� : ", i + 1);
		scanf_s("%d", &data);

		insertValue(data);
	}
	printf("�˻��� Ű�� �Է��ϼ���\n");
	scanf_s("%d", &data);

	bool search = findValue(data);

	if (search) {
		printf("�˻��Ǿ����ϴ�. \n");
	}
	else {
		printf("�˻����� �ʾҽ��ϴ�. \n");
	}

	//printf("hash ���̺� ���\n");

	//for (int i = 0; i < 10; i++) {
	//	printf("hashtable = %d\n", hashtable[i][0]);
	//}

}
