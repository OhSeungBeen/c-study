// test
#include<stdio.h>
#include <stdbool.h>

void swap(int* pa, int* pb);

int main(void) {

	/////////////////////////////////////////////////////////////////
	/*
	char c;
	printf("���� ����� �Է��ϼ��� : ");
	scanf("%c", &c);
	printf("�Է��� ���: %c\n", c);
	printf("�Է��� ����� �ƽ�Ű�ڵ� %d", c);
	*/

	/////////////////////////////////////////////////////////////////
	int num, i, j;
	int cnt = 0;
	printf("2 �̻��� ������ �Է��Ͽ� 2���� �Է��� ������ ��� �Ҽ��� ����մϴ�.\n");
	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &num);
	for(i = 2; i <= num; i++) {
		bool isPrime = true;
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}

		if (isPrime) {
			if (cnt % 5 == 0) printf("\n");
			printf("%5d ", i);
			cnt++;
		}
		
	}

	/////////////////////////////////////////////////////////////////
	/*int age = 25, chest = 95;
	char size;
	if (age < 20) {
		if (chest < 85) {
			size = 'S';
		}
		else if (chest < 95) {
			size = 'M';
		}
		else {
			size = 'L';
		}
	}
	else {
		if (chest < 90) {
			size = 'S';
		}
		else if (chest < 100) {
			size = 'M';
		}
		else {
			size = 'L';
		}
	}
	printf("������� %c�Դϴ�.\n", size);*/
	/////////////////////////////////////////////////////////////////
	/*int a = 10, b = 20;
	swap(&a, &b);
	printf("a = %d, b = %d", a, b);*/

	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 5; j > 0; j--) {
			if (i < j) {
				printf("*");
			}
			else {
				printf("0");
			}
		}
		printf("\n");
	}*/

	/*int i, j;
	for (i = 0; i < 5; i++) {
		for(j = 0; j < 5; j++) {
			if (i <= j) {
				printf("*");
			}
			else {
				printf("0");
			}
		}
		printf("\n");
	}*/
}

//void swap(int* a, int* b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}