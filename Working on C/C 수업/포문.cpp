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
//			printf("%d 곱하기 %d(는)은 %d입니다.\n", i , j , i * j);
//			Sleep(1000);
//		printf("\n");
//	}
//	printf("구구단 완료!");
//}

//구구단
//void main() {
//	int i;
//	int j;
//
//	for (i = 2; i <= 9; i++) {
//		for (j = 1; j <= 9; j++)
//			printf("%d 곱하기 %d(는)은 %d입니다.\n", i , j , i * j);
//			Sleep(1000);
//		printf("\n");
//	}
//	printf("구구단 완료!");
//}


//짝수 구구단
//void main() {
//	int i;
//	int j;
//
//	for (i = 2; i <= 9; i++) {
//		if (i % 2 != 0) {
//			continue;
//		}
//		for (j = 1; j <= 9; j++)
//			printf("%d 곱하기 %d(는)은 %d입니다.\n", i, j, i * j);
//		Sleep(1000);
//		printf("\n");
//	}
//	printf("짝수 구구단 완료!");
//}

void main() {
	int floor = 0;
	printf("원하시는 층의 수를 입력해주세요. :");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");

		}
		printf("\n");
	}
	return;
}