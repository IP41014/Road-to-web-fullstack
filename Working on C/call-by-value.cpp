#include<stdio.h>

void callValue(int b);

int main(void) {
	int a = 1;
	callValue(a);
	printf("���μ� a�� ��� : %d\n", a);

	return 0;
}

void callValue(int b) {
	b = b + 3;
	printf("�����μ� b�� ��� : %d\n", b);
}