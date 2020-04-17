// 다차원 배열과 포인터 배열
// 포인터 배열 선언과 사용
#include<stdio.h>

int main(void) {
	char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++) {
		printf("%s\n", pary[i]);
	}

	return 0;
}