// ������
// const ���

#include<stdio.h>

int main() {
	int a = 10, b = 20;

	int* const pa2 = &a; // ����� �ּҰ��� �ٲ� �� ����. ���������°���
	// pa2 = &b; error

	const int *pa = &a; // ����Ű�� ������ ���� �ٲ� �� ����(����������).
	//*pa = 20; eroror 

	printf("���� a�� : %d\n", *pa);
	pa = &b;
	printf("���� b�� : %d\n", *pa);
	a = 20;
	printf("���� a�� : %d\n", *pa);

	return 0;


}