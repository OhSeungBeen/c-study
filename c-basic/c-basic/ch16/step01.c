// 메모리 동적 할당
// malloc, free
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int *pi;
	double* pd;

	pi = (int *)malloc(sizeof(int));
	if (pi == NULL) {
		printf("#으로 메모리가 부족합니다.\n");
		exit(1);
	}
	pd = (double *)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %lf\n", *pd);

	//동적할당된 메모리를해제
	// pi, pd가 가지고있는 주소는 그대로 남아있다.
	free(pi);
	free(pd);

	return 0;
}