// ���ڿ�
// ���ڿ� �� srcmp, strncmp
// strcmp str1�� str2���� ũ�� 1��ȯ ������ -1��ȯ ������ 0��ȯ
// strncmp n��° ���� ��
#include<stdio.h>

int main(void) {
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);
	printf("�տ��� 3���� ���ڸ� ���ϸ�");
	if (strncmp(str1, str2, 3) == 0)
		printf("����.\n");
	else
		printf("�ٸ���.\n");
	return 0;
}