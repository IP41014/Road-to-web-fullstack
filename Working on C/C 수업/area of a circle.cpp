#include<stdio.h>

void area(int a);

void main() {
	int radian;
	printf("원의 반지름을 입력하세요.: ");
	scanf_s("%d", &radian);

	area(radian);

	return;
}

void area(int a) {
	double result = a * a * 3.14;
	
	printf("원의 넓이는 %f입니다. \n", result);

	return;
}