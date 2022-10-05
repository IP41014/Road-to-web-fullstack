#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node {
	int value;
	Node* next;
};

Node* head;

Node* InsertNode(Node* Target, Node* aNode) {
	//Target은 현재 노드
	//aNode는 추가할 노드

	Node* New = (Node*)malloc(sizeof(Node));
	*New = *aNode;

	New->next = Target->next;
	Target->next = New;
	return New;
}

void main() {
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;

	Node* Now;
	Node Temp;

	Now = head;

	for (int i = 0; i < 6; i++) {
		Temp.value = i + 1;
		Now = InsertNode(Now, &Temp);
	}

	for (Now = head->next; Now; Now = Now->next) {
		printf("%d\t", Now->value);
	}


}	