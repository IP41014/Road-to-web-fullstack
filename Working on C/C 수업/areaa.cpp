#include<stdio.h>

void area(int a, int b);

void main() {
	int w, h;
	printf("사각형 두 변의 길이를 입력하세요.: ");
	scanf_s("%d%d", &w, &h);

	area(w, h);

	return;
}

void area(int a, int b) {
	
	printf("사각형의 넓이는 %d입니다. \n", a * b);
}