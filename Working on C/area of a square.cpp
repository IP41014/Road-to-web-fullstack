#include<stdio.h>

void area(int a, int b);

void main() {
	int w, h;
	printf("�簢�� �� ���� ���̸� �Է��ϼ���.: ");
	scanf_s("%d%d", &w, &h);

	area(w, h);

	return;
}

void area(int a, int b) {
	
	printf("�簢���� ���̴� %d�Դϴ�. \n", a * b);
}