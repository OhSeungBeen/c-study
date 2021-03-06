// 배열과 포인터
// 배열명이 주소인지 확인
#include<stdio.h>

int main(void) {
	int ary[5] = { 10, 20, 30, 40, 50 };

	printf("배열명 자체의 값 : %u\n", ary);
	printf("첫 번째 배열 요소의 주소 :%u\n", &ary[0]);
	printf("배열명이 가리키는 요소의 값 : %d\n", *ary);
	printf("첫 번째 배열 요소의 값 :%d\n", ary[0]);

	printf("두 번째 배열 요소의 주소 :%u\n", ary + 1);
	printf("두 번째 배열 요소의 주소 :%u\n", &ary[1]);
	printf("두 번째 배열 요소의 값 :%d\n", *(ary+1));
	printf("두 번째 배열 요소의 값 :%d\n", ary[1]);

	return 0;
}