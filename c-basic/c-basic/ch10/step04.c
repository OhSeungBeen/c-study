// 배열과 포인터
// 포인터가 가지는 변수로서의 특징 활용
#include<stdio.h>

int main(void) {
	int ary[3] = {10, 20, 30};
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++) {
		printf("%d ", *pa);
		pa++;
	}
	return 0;
}