#include<stdio.h>

struct student {
	char name[10];
	int age;
	double height;

}st[5] = { { "�ڵ���", 22, 170 }, { "���ּ�", 17, 189 }, { "������", 28, 176 },
{ "�����", 11, 130 }, { "��μ�", 18, 166 } };

int main(void) {
	int i;
	struct student* pSt;
	pSt = st;
	printf("st[i] ����ü ����� �ʱⰪ ���\n");
	for (i = 0; i < 5; i++) {
		printf("�̸� = %s, ���� = %d, Ű = %.2f\n", st[i].name, st[i].age, st[i].height);
	}
	printf("\n����ü �����͸� �̿��� ���\n");
	for (i = 0; i < 5; i++) {
		printf("�̸� = %s, ���� = %d, Ű = %.2f\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
	}
	return 0;
}