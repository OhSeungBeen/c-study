// 자료구조
// 원형 큐
#include<stdio.h>
#include<stdlib.h>
#define Q_SIZE 4

typedef char element;

typedef struct {
	element queue[Q_SIZE];
	int front, rear;
}QueueType;

QueueType* createQueue() {
	QueueType* Q;
	Q = (QueueType*)malloc(sizeof(QueueType));
	Q->front = 0;
	Q->rear = 0;
	return Q;
}

int isEmpty(QueueType* Q) {
	if (Q->front == Q->rear) {
		printf("Circular Queue is empty! ");
		return 1;
	}
	else return 0;
}

int isFull(QueueType* Q) {
	if (((Q->rear + 1) % Q_SIZE) == Q->front) {
		printf(" Circular Queue is full!");
		return 1;
	}
	else return 0;
}

void enQueue(QueueType* Q, element item) {
	if (isFull(Q)) exit(1);
	else {
		Q->rear = (Q->rear + 1) % Q_SIZE;
		Q->queue[Q->rear] = item;
	}
}

element deQueue(QueueType* Q) {
	if (isEmpty(Q)) return;
	else Q->front = (Q->front + 1) % Q_SIZE;
	return Q->queue[Q->front];
}

element peek(QueueType* Q) {
	if (isEmpty(Q)) exit(1);
	else return Q->queue[(Q->front + 1) % Q_SIZE];
}

void printQ(QueueType* Q) {
	int i, first, last;
	first = (Q->front + 1) % Q_SIZE;
	last = (Q->rear + 1) % Q_SIZE;
	printf(" Circular Queue : [");
	i = first;
	while (i != last) {
		printf("%3c", Q->queue[i]);
		i = (i + 1) % Q_SIZE;
	}
	printf(" ]");
}

void main(void) {
	QueueType* cQ = createQueue();
	element data;
	printf("\n 원형 큐 연산 \n");
	printf("\n 삽입 A>>"); enQueue(cQ, 'A'); printQ(cQ);
	printf("\n 삽입 B>>"); enQueue(cQ, 'B'); printQ(cQ);
	printf("\n 삽입 C>>"); enQueue(cQ, 'C'); printQ(cQ);
	data = peek(cQ); printf(" peek item : %c \n", data);
	printf("\n 삭제 >>"); data = deQueue(cQ); printQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n 삭제 >>"); data = deQueue(cQ); printQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n 삭제 >>"); data = deQueue(cQ); printQ(cQ);
	printf("\t\t삭제 데이터 : %c", data);

	printf("\n 삽입 D>>"); enQueue(cQ, 'D'); printQ(cQ);
	printf("\n 삽입 E>>"); enQueue(cQ, 'E'); printQ(cQ);
}