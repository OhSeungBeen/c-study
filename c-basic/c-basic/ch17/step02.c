// ����� ���� �ڷ���
// �迭�� �����͸� ����� ���� ����ü ���
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

	strcpy(been.name, "���º�");
	been.age = 20;
	been.height = 178;

	been.intro = (char*)malloc(80);
	prinf("�ڱ�Ұ� :");
	gets(been.intro);
	
	printf("�̸� : %s\n", been.name);
	printf("���� : %d\n", been.age);
	printf("Ű : %.1lf\n", been.height);
	
	return 0;
}