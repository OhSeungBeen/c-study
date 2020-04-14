// 포인터
// const 사용

#include<stdio.h>

int main() {
	int a = 10, b = 20;

	int* const pa2 = &a; // 저장된 주소값을 바꿀 수 없다. 간접참조는가능
	// pa2 = &b; error

	const int *pa = &a; // 가르키는 변수의 값을 바꿀 수 없다(간접참조로).
	//*pa = 20; eroror 

	printf("변수 a값 : %d\n", *pa);
	pa = &b;
	printf("변수 b값 : %d\n", *pa);
	a = 20;
	printf("변수 a값 : %d\n", *pa);

	return 0;


}