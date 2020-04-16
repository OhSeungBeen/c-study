// 문자
// 입력 문자의 아스키 코값 출력하는 프로그램
#include<stdio.h>

int main(void) {
	int res;
	char ch;

	while (1) {
		res = scanf("%c", &ch);
		if (res == -1) break;
		printf("%d ", ch);
	}
	return 0;
}