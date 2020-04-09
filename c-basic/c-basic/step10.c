// 초기화한 배열에 문자열 복사 예제
#include<stdio.h>
#include<string.h>

int main(void) {
	char fruit[20] = "strawberry";
	//fruit = "banana";  // 대입연산자 사용 불가능  -> strcpy함수 사용

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	// null을 만날때까지 출력된것이지 원래있던 값이 없어지는것은 아니다.
	// 확인
	int i;
	for (i = 0; i < sizeof(fruit); i++) {
		printf("%c", fruit[i]);
	}

	return 0;
}