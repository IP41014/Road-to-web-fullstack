#include<stdio.h>

struct student {
	char name[10];
	int age;
	double height;

}st[5] = { { "박동규", 22, 170 }, { "이주성", 17, 189 }, { "송유흠", 28, 176 },
{ "김민준", 11, 130 }, { "김민성", 18, 166 } };

int main(void) {
	int i;
	struct student* pSt;
	pSt = st;
	printf("st[i] 구조체 멤버의 초기값 출력\n");
	for (i = 0; i < 5; i++) {
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", st[i].name, st[i].age, st[i].height);
	}
	printf("\n구조체 포인터를 이용한 출력\n");
	for (i = 0; i < 5; i++) {
		printf("이름 = %s, 나이 = %d, 키 = %.2f\n", (pSt + i)->name, (pSt + i)->age, (pSt + i)->height);
	}
	return 0;
}