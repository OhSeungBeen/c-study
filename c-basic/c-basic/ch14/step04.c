// 다차원 배열과 포인터 배열
// 2차원 char 배열 초기화
#include<stdio.h>

int main(void) {
	char animal1[5][10] = {
		{'c', 'a', 't', '\0'},
		{'h', 'o', 'r', 's', 'e', '\0'},
		{'t', 'i', 'g', 'e', 'r','\0'},
		{'e', 'l', 'e', 'p', 'h', 'a', 'n', 't','\0'},
	};

	char animal2[][10] = { "cat", "horse", "dog", "tiger", "elephant" };
	int i;

	for (i = 0; i < 5; i++) {
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%s ", animal2[i]);
	}
	return 0;
}