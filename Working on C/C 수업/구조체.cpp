#include<stdio.h>

#include<string.h>

//int main() {
//
//	int arr[5] = { 1, 2, 7, 4, 5 };
//
//	int j = 1;
//
//	for (int i = 0; i < sizeof(arr) / 4; i++) {
//		int size = sizeof(arr) / 4 - j;
//		ar[i] = arr[size];
//		j++;
//		printf("%d\n", ar[i]);
//	}
//	
//}
//	
//int main() {
//	int arr[5] = { 1, 2, 7, 4, 5 };
//	printf("")
//}
//
//

// ����ü ����(����)

struct object {
	char name[10];
	int height;
	int weight;

}obj;

int main(void) {
	printf("������ �̸� : ");
	fgets(obj.name, 9, stdin);
	printf("������ ���� : ");
	scanf_s("%d", &obj.height);
	printf("������ ���� : ");
	scanf_s("%d", &obj.weight);

	printf(" ���� ������ ���� = %s, %d, %d \n", obj.name, obj.height, obj.weight);
}



