// ����
// �빮�ڸ� �ҹ��ڷ� �ٲٴ� ����
#include<stdio.h>

int main(void) {
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n'); // '\n'�� %c�� ����ϸ� ���� �ٲ��.
	printf("�ҹ��� : %c", small);
	
	return 0;
}