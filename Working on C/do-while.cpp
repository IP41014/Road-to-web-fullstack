#include<stdio.h>

//void main() {
//	int i = 0;
//
//	do {
//		printf("Programming\n");
//		i++;
//	} while (i < 5);
//	return;
//}

int main() {
	int sum = 0;
	int input = 0;

	do {
		printf("������ �Է��ϼ���. :");
		scanf_s("%d", &input);
		sum += input;
	} while (input != 0);
	printf("�� ����: %d �Դϴ�.\n", sum);
	return 0;
}