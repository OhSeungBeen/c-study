// Á¶°Ç¹® if ~ else
#include<stdio.h>

int main(void) {
	int a = 10;
	if (a >= 10) {
		a = 1;		
	}else {
		a = -1;
	}
	printf("a : %d\n", a);

	int b = 0, c = 0;
	if (b > 0) {
		c = 1;
	}else if (b == 0) {
		c = 2;
	}else {
		c = 3;
	}
	printf("a : %d\n", c);

	return 0;
}