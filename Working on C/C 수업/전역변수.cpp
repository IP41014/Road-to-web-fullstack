#include<stdio.h>

int global;
void plus(int i, int j);

int main(void) {

	int a;
	int b;
	printf("�� ���� ������ �Է��ϼ���. : ");
	scanf_s("%d%d", &a, &b);

	plus(a, b);
	printf("�� ������ ����: %d�Դϴ�.\n", global);
	return 0;
}

void plus(int i, int j) {
	global = i + j;
}