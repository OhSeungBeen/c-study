// �ʱ�ȭ�� �迭�� ���ڿ� ���� ����
#include<stdio.h>
#include<string.h>

int main(void) {
	char fruit[20] = "strawberry";
	//fruit = "banana";  // ���Կ����� ��� �Ұ���  -> strcpy�Լ� ���

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	// null�� ���������� ��µȰ����� �����ִ� ���� �������°��� �ƴϴ�.
	// Ȯ��
	int i;
	for (i = 0; i < sizeof(fruit); i++) {
		printf("%c", fruit[i]);
	}

	return 0;
}