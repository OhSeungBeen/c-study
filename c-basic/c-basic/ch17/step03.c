// ����� ���� �ڷ���
// �پ��� ����ü ���
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

	printf("���� : %d\n", been.pf.age);
	printf("Ű : %.1lf\n", been.pf.height);
	printf("�й� : %d\n", been.id);
	printf("���� : %.1lf\n", been.grade);
	return 0;
}