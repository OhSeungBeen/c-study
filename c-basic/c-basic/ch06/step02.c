// for문
#include<stdio.h>

int main(void) {
	int a = 1;
	int i;

	// 실행순서 
	// 초기식
	// 
	// 반복
	// 조건식 ? 거짓-> 반복문 끝
	// 실행문
	// 증감식
	for (i = 0; i < 3; i++) {
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}