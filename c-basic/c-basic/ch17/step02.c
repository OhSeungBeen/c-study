// 사용자 정의 자료형
// 배열과 포인터를 멤버로 갖는 구조체 사용
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};

int main(void) {

	struct profile been;

	strcpy(been.name, "오승빈");
	been.age = 20;
	been.height = 178;

	been.intro = (char*)malloc(80);
	prinf("자기소개 :");
	gets(been.intro);
	
	printf("이름 : %s\n", been.name);
	printf("나이 : %d\n", been.age);
	printf("키 : %.1lf\n", been.height);
	
	return 0;
}