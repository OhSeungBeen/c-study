// 나눗셈 연산자와 나머지 연산자
#include<stdio.h>

int main(void) {
	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple); // 2.5
	printf("banana : %d\n", banana); // 2
	printf("orange : %d\n", orange); // 1
	return 0;
}