#include<stdio.h>

//void main() {
//	int i = 0;
//
//	do {
//		printf("Programming\n");
//		i++;
//	} while (i < 5);
//	return;
//}

int main() {
	int sum = 0;
	int input = 0;

	do {
		printf("정수를 입력하세요. :");
		scanf_s("%d", &input);
		sum += input;
	} while (input != 0);
	printf("총 합은: %d 입니다.\n", sum);
	return 0;
}