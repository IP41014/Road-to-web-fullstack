#include<stdio.h>
#include<Windows.h>

//void main() {
//	int i;
//
//	for (i = 2; i <= 10; i+=2) {
//
//		printf("%d\n", i);
//	}
//
//	return;
//}

//void main() {
//	int i;
//	int j;
//
//	for (i = 2; i <= 9; i++) {
//		for (j = 1; j <= 9; j++)
//			printf("%d ���ϱ� %d(��)�� %d�Դϴ�.\n", i , j , i * j);
//			Sleep(1000);
//		printf("\n");
//	}
//	printf("������ �Ϸ�!");
//}

//������
//void main() {
//	int i;
//	int j;
//
//	for (i = 2; i <= 9; i++) {
//		for (j = 1; j <= 9; j++)
//			printf("%d ���ϱ� %d(��)�� %d�Դϴ�.\n", i , j , i * j);
//			Sleep(1000);
//		printf("\n");
//	}
//	printf("������ �Ϸ�!");
//}


//¦�� ������
//void main() {
//	int i;
//	int j;
//
//	for (i = 2; i <= 9; i++) {
//		if (i % 2 != 0) {
//			continue;
//		}
//		for (j = 1; j <= 9; j++)
//			printf("%d ���ϱ� %d(��)�� %d�Դϴ�.\n", i, j, i * j);
//		Sleep(1000);
//		printf("\n");
//	}
//	printf("¦�� ������ �Ϸ�!");
//}

void main() {
	int floor = 0;
	printf("���Ͻô� ���� ���� �Է����ּ���. :");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");

		}
		printf("\n");
	}
	return;
}