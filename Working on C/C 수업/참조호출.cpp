#include<stdio.h>

//void callReference(int* b);
//
//int main(void) {
//	int a = 1;
//	callReference(&a);
//	printf("실인수 a의 출력 : %d\n", a);
//
//	return 0;
//}
//
//void callReference(int* b) {
//	*b = *b + 3;
//	printf("형식인수 *b의 출력 : %d\n", *b);
//}


// -----------------------------------------------------------------------

void sumgob(int a, int b, int* plus, int* multi);

int main(void) {

	int x;
	int y;
	int sum = 0;
	int gob = 0;

	printf("두 수를 입력하세요. : \n");
	scanf_s("%d%d", &x, &y);
	
	sumgob(x, y, &sum, &gob);
	printf("합은 %d\n", sum);
	printf("곱은 %d\n", gob);

	return 0;
}

void sumgob(int a, int b, int* plus, int* multi) {
	*plus = a + b;
	*multi = a * b;
}