#include<stdio.h>

int global;
void plus(int i, int j);

int main(void) {

	int a;
	int b;
	printf("두 개의 정수를 입력하세요. : ");
	scanf_s("%d%d", &a, &b);

	plus(a, b);
	printf("두 점수의 합은: %d입니다.\n", global);
	return 0;
}

void plus(int i, int j) {
	global = i + j;
}