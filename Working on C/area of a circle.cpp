#include<stdio.h>

void area(int a);

void main() {
	int radian;
	printf("���� �������� �Է��ϼ���.: ");
	scanf_s("%d", &radian);

	area(radian);

	return;
}

void area(int a) {
	double result = a * a * 3.14;
	
	printf("���� ���̴� %f�Դϴ�. \n", result);

	return;
}