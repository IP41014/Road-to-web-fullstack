#include<stdio.h>

//void callReference(int* b);
//
//int main(void) {
//	int a = 1;
//	callReference(&a);
//	printf("���μ� a�� ��� : %d\n", a);
//
//	return 0;
//}
//
//void callReference(int* b) {
//	*b = *b + 3;
//	printf("�����μ� *b�� ��� : %d\n", *b);
//}


// -----------------------------------------------------------------------

void sumgob(int a, int b, int* plus, int* multi);

int main(void) {

	int x;
	int y;
	int sum = 0;
	int gob = 0;

	printf("�� ���� �Է��ϼ���. : \n");
	scanf_s("%d%d", &x, &y);
	
	sumgob(x, y, &sum, &gob);
	printf("���� %d\n", sum);
	printf("���� %d\n", gob);

	return 0;
}

void sumgob(int a, int b, int* plus, int* multi) {
	*plus = a + b;
	*multi = a * b;
}