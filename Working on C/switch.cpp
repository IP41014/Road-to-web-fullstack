#include<stdio.h>

//void main() {
//	int month;
//	printf("1~12�� �߿� ���� ����ּ���, :");
//	scanf_s("%d", &month);
//	
//	switch (month) {
//		case 3: case 4: case 5:
//			printf("���Դϴ�.");
//			break;
//		case 6: case 7: case 8:
//			printf("�����Դϴ�.");
//			break;
//		case 9: case 10: case 11:
//			printf("�����Դϴ�.");
//			break;
//		case 12: case 1: case 2:
//			printf("�ܿ��Դϴ�.");
//			break;
//
//		default:
//			printf("�ش��ϴ� ���� �����ϴ�. \n");
//			break;
//	}
//	return 0;
//}

int main() {
	int score;
	printf("���ڸ� �Է��ϼ���. :");
	scanf_s("%d", &score);
	
	score = score % 2;


	switch (score) {
		case 0:
			printf("¦���Դϴ�. \n");
			break;
		case 1:
			printf("Ȧ���Դϴ�. \n");
			break;
		default:
			printf("�� �̿��� �� �Դϴ�.\n");
	}
	return 0;
}
