#include<stdio.h>

int
compare(int a, int b);

void main() {
	int i, j;
	printf("�� ���� �Է��ϼ���. :");
	scanf_s("%d%d", &i, &j);

	compare(i, j);
}

int compare(int a, int b) {
	if (a > b) {
		return printf("�ִ밪: %d\n�ּҰ�: %d", a, b);
	}
	else {
		if (b > a) {
			return printf("�ִ밪: %d\n�ּҰ�: %d", b, a);
		}
		else {
			return printf("�� ���� �����ϴ�.\n");
		}
	}
}


