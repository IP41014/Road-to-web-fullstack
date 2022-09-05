#include<stdio.h>

//void main() {
//	int month;
//	printf("1~12월 중에 달을 골라주세요, :");
//	scanf_s("%d", &month);
//	
//	switch (month) {
//		case 3: case 4: case 5:
//			printf("봄입니다.");
//			break;
//		case 6: case 7: case 8:
//			printf("여름입니다.");
//			break;
//		case 9: case 10: case 11:
//			printf("가을입니다.");
//			break;
//		case 12: case 1: case 2:
//			printf("겨울입니다.");
//			break;
//
//		default:
//			printf("해당하는 달이 없습니다. \n");
//			break;
//	}
//	return 0;
//}

int main() {
	int score;
	printf("숫자를 입력하세요. :");
	scanf_s("%d", &score);
	
	score = score % 2;


	switch (score) {
		case 0:
			printf("짝수입니다. \n");
			break;
		case 1:
			printf("홀수입니다. \n");
			break;
		default:
			printf("그 이외의 수 입니다.\n");
	}
	return 0;
}
