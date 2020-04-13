// 재귀호출 함수
#include<stdio.h>

void fruit(int n);

int main(void) {
	fruit(1);

	return 0;
}

void fruit(int n) {
	printf("apple\n");
	if (n == 3) return;
	fruit(n + 1);
	printf("jam\n");
}