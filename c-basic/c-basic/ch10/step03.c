// 배열과 포인터
// 포이터가 배열명 저장하면 배열명처럼 사용가능
#include<stdio.h>

int main(void) {
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1]; // 대괄호를 써서 pa를 배열명처럼 사용가능

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i)); // ary[i]
	}

	return 0;
}