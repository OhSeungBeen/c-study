//const 변수
#include<stdio.h>
#include<string.h>

int main(void) {
	int income = 0;
	double tax;
	//const를 사용하면 값을 바꿀수 없으므로 반드시 선언과 동시에 초기화해야한다.
	const double tax_rate = 0.12;

	income = 456;
	tax = income * tax_rate;
	printf("세금은: %.1lf입니다.\n", tax);
	return 0;
}