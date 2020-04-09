// 실수 자료형
#include<stdio.h>

int main(void) {

	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", ft);

	return 0;
}