// �޸� ���� �Ҵ�
// calloc, realloc
// malloc�� calloc���� �ʱ�ȭ �ڵ�, �Ű�����2��

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int* pi;
	int size = 5;
	int cnt = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));

	while (1) {
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (cnt < size) {
			pi[cnt++] = num;
		}
		else {
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
			pi[cnt++] = num;
		}
	}
	return 0;
}