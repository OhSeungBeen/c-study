// ���� ������
#include<stdio.h>

int main(void) {
	int a = 10, b = 10;
	++a;
	--b;
	printf("a : %d\n", a); // 11 
	printf("b : %d\n", b); // 9

	int c = 5, d = 5;
	int pre, post;
	pre = (++c) * 3; // ������ (���� �� ����)
	post = (d++) * 3; // ������ (���� �� ����)
	printf("�ʱ갪 a = %d, b = %d\n", c, d);
	printf("������: (++a) * 3 = %d, ������: (b++) * 3 = %d\n", pre, post);

	return 0;
}