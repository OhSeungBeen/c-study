//문자와 문자열 입력 예제
#include<stdio.h>

int main(void) {
	char grade;
	char name[20];

	printf("학점 입력 :");
	scanf("%c", &grade);
	//배열은 변수자체가 주소를 나타냄으로 &를 붙일 필요가 없다.
	//스페이스나 엔터, 탭등을 만나면 바로 전까지만 저장된다. 공백 없이 연속으로 입력해야한다.
	// ex) 오 승빈 -> 오까지만 저장		
	printf("이름 입력 :");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);
	return 0;
}