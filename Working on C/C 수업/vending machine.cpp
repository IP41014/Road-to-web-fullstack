#include<stdio.h>

int coin(int price);

void main() {
	int price;
	while (1) {
		printf("������ �������ּ���. (100��, 200��)\n");
		scanf_s("%d", &price);
		if (price == 100 || price == 200) {
			break;
		}
		else {
			printf("100�� ������ �������ּ���.\n");
		}
	}

	coin(price);
}

int coin(int price) {

	if (price == 100) {
		return printf("��Ŀ��\n");
	}
	else {
		if (price == 200) {
			return printf("��ũĿ��\n");
		}

	}
}