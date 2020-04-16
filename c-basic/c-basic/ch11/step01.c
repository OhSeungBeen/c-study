// 문자
// 정수처럼 사용되는 문자
#include<stdio.h>

int main(void) {

	int ch;

	printf("문자 a의 아스키 코드값 : %d\n", 'a');
	printf("아스키 코드값이 97인 문자 : %c\n", 97);
	printf("문자 상수의 크기 : %d바이트\n", sizeof('a')); // 정수형태로저장 -> 4바이트

	ch = 'a';
	ch++;
	printf("문자 %c의 아스키 코드값 : %d\n", ch, ch);

	return 0;
}