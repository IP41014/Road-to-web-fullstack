#include<stdio.h>

void callValue(int b);

int main(void) {
	int a = 1;
	callValue(a);
	printf("실인수 a의 출력 : %d\n", a);

	return 0;
}

void callValue(int b) {
	b = b + 3;
	printf("형식인수 b의 출력 : %d\n", b);
}