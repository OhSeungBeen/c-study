// char배열 문자열 저장 예제
#include<stdio.h>

int main(void) {
	char fruit[20] = "strawberry";

	//null을 만날때까지의 값을 출력한다.
	printf("딸기 : %s\n", fruit);
	printf("딸기잼 : %s %s\n", fruit, "jam");
	printf("좋아하는 과일 : %s\n", fruit);
	printf("%s\n", fruit[10]);  //문자열 끝에(null)문자 자동으로 저장한다.
	printf("fruit배열의 크기: %d\n", sizeof(fruit));
	printf("fruit배열의 주소: %d", fruit);
	return 0;
}