// char�迭 ���ڿ� ���� ����
#include<stdio.h>

int main(void) {
	char fruit[20] = "strawberry";

	//null�� ������������ ���� ����Ѵ�.
	printf("���� : %s\n", fruit);
	printf("������ : %s %s\n", fruit, "jam");
	printf("�����ϴ� ���� : %s\n", fruit);
	printf("%s\n", fruit[10]);  //���ڿ� ����(null)���� �ڵ����� �����Ѵ�.
	printf("fruit�迭�� ũ��: %d\n", sizeof(fruit));
	printf("fruit�迭�� �ּ�: %d", fruit);
	return 0;
}