// unsigned 변수와 잘못 사용한 예제
// %d로 메모리범위에 벗어난 수를 출력하면 음수 값이 나올 수 있다.
#include<stdio.h>

int main(void) {
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);

	return 0;
}