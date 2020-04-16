// 문자
// 문자 입출력(getchar함수와 putchar 함수)
#include<stdio.h>

int main(void) {
	int ch;

	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}