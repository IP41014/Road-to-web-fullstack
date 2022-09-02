#include<stdio.h>

int
compare(int a, int b);

void main() {
	int i, j;
	printf("두 수를 입력하세요. :");
	scanf_s("%d%d", &i, &j);

	compare(i, j);
}

int compare(int a, int b) {
	if (a > b) {
		return printf("최대값: %d\n최소값: %d", a, b);
	}
	else {
		if (b > a) {
			return printf("최대값: %d\n최소값: %d", b, a);
		}
		else {
			return printf("두 수가 같습니다.\n");
		}
	}
}


