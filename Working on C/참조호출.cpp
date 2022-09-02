#include<stdio.h>

void callReference(int* b);

int main(void) {
	int a = 1;
	callReference(&a);
	printf("실인수 a의 출력 : %d\n", a);

	return 0;
}

void callReference(int* b) {
	*b = *b + 3;
	printf("형식인수 *b의 출력 : %d\n", *b);
}