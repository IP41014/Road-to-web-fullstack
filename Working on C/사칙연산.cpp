#include<stdio.h>

int plus(int a, int b);
int minus(int a, int b);
int multiple(int a, int b);
int division(int a, int b);

int main() {
	int i = 0;
	int j = 0;
	printf("�� ���ڸ� �Է����ּ���. : ");
	scanf_s("%d%d", &i, &j);

	printf("�� ������ ���� %d �Դϴ�. \n", plus(i, j));
	printf("�� ������ ���� %d �Դϴ�. \n", minus(i, j));
	printf("�� ������ ���� %d �Դϴ�. \n", multiple(i, j));
	printf("�� ������ ������� %d �Դϴ�. \n", division(i, j));
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
