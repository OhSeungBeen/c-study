// 배열과 반복문 예제
#include<stdio.h>

int main(void) {
	int score[5];
	int i;
	int tot = 0;
	double avg;
	int cnt;

	cnt = sizeof(score) / sizeof(score[0]);


	for (i = 0; i < cnt; i++) {
		scanf("%d", &score[i]);
	}

	for (i = 0; i < cnt; i++) {
		tot += score[i];
	}

	avg = tot / (double)cnt;

	for (i = 0; i < cnt; i++) {
		printf("%5d", score[i]);
	}

	printf("\n");

	printf("평균 : %.1f\n", avg);

		return 0;
}