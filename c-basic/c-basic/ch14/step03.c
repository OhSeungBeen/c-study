// 다차원 배열과 포인터 배열
// 2차원 char배열 입출력
#include<stdio.h>

int main(void) {
	char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]); // 행의 수 계산
	for (i = 0; i < count; i++) {
		scanf("%s", animal[i]);
	}
	
	for (i = 0; i < count; i++) {
		printf("%s ", animal[i]);
	}
	return 0;
}