// 증감 연산자
#include<stdio.h>

int main(void) {
	int a = 10, b = 10;
	++a;
	--b;
	printf("a : %d\n", a); // 11 
	printf("b : %d\n", b); // 9

	int c = 5, d = 5;
	int pre, post;
	pre = (++c) * 3; // 전위형 (증감 후 연산)
	post = (d++) * 3; // 후위형 (연산 후 증감)
	printf("초깃값 a = %d, b = %d\n", c, d);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);

	return 0;
}