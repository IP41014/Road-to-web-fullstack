#include<stdio.h>

int plus(int a, int b);
int minus(int a, int b);
int multiple(int a, int b);
int division(int a, int b);

int main() {
	int i = 0;
	int j = 0;
	printf("두 숫자를 입력해주세요. : ");
	scanf_s("%d%d", &i, &j);

	printf("두 정수의 합은 %d 입니다. \n", plus(i, j));
	printf("두 정수의 차는 %d 입니다. \n", minus(i, j));
	printf("두 정수의 곱은 %d 입니다. \n", multiple(i, j));
	printf("두 정수의 나누기는 %d 입니다. \n", division(i, j));
}

int plus(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int multiple(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	return a / b;
}
