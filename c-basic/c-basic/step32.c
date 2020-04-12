// ÁßÃ¸ ¹Ýº¹¹®
#include<stdio.h>

int main(void) {
	int i, j, k;
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= 4 - i; j++) {
			printf("*");
		}
		for (k = 0; k <= i; k++) {
			printf(" ");
		}
		printf("\n");
	}
	
	// int i, j;

	// for (i = 1; i < 6; i++)
	// {
	// 	for (j = 5; j > 0; j--)
	// 	{
	// 		if (i < j)
	// 		{
	// 			printf(" ");
	// 		}
	// 		else
	// 		{
	// 			printf("*");
	// 		}
	// 	}
	// 	printf("\n");
	// }
	// for (i = 0; i < 5; i++)
	// {
	// 	for (j = 0; j < 5; j++)
	// 	{
	// 		if (i > j)
	// 		{
	// 			printf(" ");
	// 		}
	// 		else
	// 		{
	// 			printf("*");
	// 		}
	// 	}
	// 	printf("\n");
	// }
	return 0;
}

