#include<stdio.h>

void Add(int p);

int main(void) {
	const int a = 3; 
	int arrgrade[a]; 
	int total = 0;
	double avg = 0.0;

	for (int i = 0; i < a; i++) {
		scanf_s("%d", &arrgrade[i]);
		total += arrgrade[i];
	}

	avg = total / a;

	printf("����: %d\n", total);
	printf("���: %f\n", avg);

	return 0;
}

void Add(int p) {

}