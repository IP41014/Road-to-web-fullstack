#include<stdio.h>

int coin(int price);

void main() {
	int price;
	while (1) {
		printf("동전을 투입해주세요. (100원, 200원)\n");
		scanf_s("%d", &price);
		if (price == 100 || price == 200) {
			break;
		}
		else {
			printf("100원 동전을 투입해주세요.\n");
		}
	}

	coin(price);
}

int coin(int price) {

	if (price == 100) {
		return printf("블랙커피\n");
	}
	else {
		if (price == 200) {
			return printf("밀크커피\n");
		}

	}
}