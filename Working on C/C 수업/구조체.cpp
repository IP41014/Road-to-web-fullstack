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

// 구조체 선언(정의)

struct object {
	char name[10];
	int height;
	int weight;

}obj;

int main(void) {
	printf("물건의 이름 : ");
	fgets(obj.name, 9, stdin);
	printf("물건의 높이 : ");
	scanf_s("%d", &obj.height);
	printf("물건의 무게 : ");
	scanf_s("%d", &obj.weight);

	printf(" 보낼 물건의 정보 = %s, %d, %d \n", obj.name, obj.height, obj.weight);
}



