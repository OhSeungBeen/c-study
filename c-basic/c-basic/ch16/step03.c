// 메모리 동적 할당
// calloc, realloc
// malloc과 calloc차이 초기화 자동, 매개변수2개

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int* pi;
	int size = 5;
	int cnt = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));

	while (1) {
		printf("양수를 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (cnt < size) {
			pi[cnt++] = num;
		}
		else {
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
			pi[cnt++] = num;
		}
	}
	return 0;
}