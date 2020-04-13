// 함수 정의
#include<stdio.h>

int add(int x, int y); // 선언

int main(void) {
	int a = 10, b = 20;
	int res;

	res = add(a, b); // 호출
	printf("result :%d\n", res);
	return 0;

}

int add(int x, int y) { // 정의
	int temp;
	temp = x + y;

	return temp;
}