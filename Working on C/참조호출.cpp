#include<stdio.h>

void callReference(int* b);

int main(void) {
	int a = 1;
	callReference(&a);
	printf("���μ� a�� ��� : %d\n", a);

	return 0;
}

void callReference(int* b) {
	*b = *b + 3;
	printf("�����μ� *b�� ��� : %d\n", *b);
}