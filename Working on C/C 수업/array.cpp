#include<stdio.h>

//int main(void) {
//	int total = 0;
//
//	int arr[5] = {1, 2, 7, 4, 5};
//	int ar[5] = { 1, 4, 9, 12, 3};
//
//	 첫 번째 방법 그대로 복사하기
//	ar[0] = arr[4];
//	ar[1] = arr[3];
//	ar[2] = arr[2];
//	ar[3] = arr[1];
//	ar[4] = arr[0];
//
//	for (int i = 0; i < sizeof(ar) / 4; i++) {
//		printf("%d\n", ar[i]);
//	}
//
//	두 번째
//	int j = 1;
//
//	for (int i = 0; i < sizeof(ar) / 4; i++) {
//		int size = sizeof(arr) / 4 - j;
//		ar[i] = arr[size];
//		j++;
//		printf("%d\n", ar[i]);
//	}
//	
//}
//
//int main(void) {
//	char str[12] = "Hello World";
//	printf("%s\n", str);
//	return 0;
//}
//


//int main(void) {
//
//	char str1[] = "Hello\0World";
//	printf("str 1 = %s\n", str1);
//
//	str1[3] = '\0';
//	printf("str 1 = %s\n", str1);
//	
//	str1[0] = '\0';
//	printf("str 1 = %s\n", str1);
//}

//int main(void) {
//	int arr[2];
//	printf("두 개의 값을 입력하세요: \n");
//	scanf_s("%d%d", &arr[0], &arr[1]);
//
//	if (arr[0] > arr[1]) {
//		printf("%d", arr[0]);
//	}
//
//	else {
//		printf("%d", arr[1]);
//	}
//	return 0;
//}

//void main() {
//	int arr[100];
//	int result = 0;
//
//
//	for (int i = 0; i < 100; i++) {
//		arr[i] = i + 1;
//		result += arr[i];
//	}
//
//	printf("1부터 100까지 이루어진 배열의 합은 %d 입니다.", result);
//}

//int main() {
//	char a = 'A';
//	char* pA = &a;
//	char b = 'a';
//
//	pA = &b;
//
//	for (int i = 0; i < 26; i++) {
//		printf("%c\n", *pA + i);
//	}
//	return 0;
//}

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	
	printf("\n\n");

	for (i = 0; i < 5; i++) {
		printf("%d", &arr[i]);
	}

	printf("\n\n");

	printf("%d", arr);

	return 0;
}