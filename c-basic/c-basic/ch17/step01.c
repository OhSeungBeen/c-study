// 사용자 정의 자료형
// 구조체 선언과 멤버 사용
#include<stdio.h>

struct student {
	int num;
	double grade;
};

int main(void) {
	struct student s1;
	
	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}