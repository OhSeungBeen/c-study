// 문자
// 대문자를 소문자로 바꾸는 예제
#include<stdio.h>

int main(void) {
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('a' - 'A');
	}
	printf("대문자 : %c %c", cap, '\n'); // '\n'를 %c로 출력하면 줄이 바뀐다.
	printf("소문자 : %c", small);
	
	return 0;
}