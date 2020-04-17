// 사용자 정의 자료형
// 다양한 구조체 멤버
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct profile {
	int age;
	double height;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int main(void) {

	struct student been;
	been.pf.age = 29;
	been.pf.height = 178;
	been.id = 1;
	been.grade = 4.5;

	printf("나이 : %d\n", been.pf.age);
	printf("키 : %.1lf\n", been.pf.height);
	printf("학번 : %d\n", been.id);
	printf("학점 : %.1lf\n", been.grade);
	return 0;
}