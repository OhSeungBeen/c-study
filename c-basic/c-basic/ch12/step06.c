// 문자열
// 문자열 비교 srcmp, strncmp
// strcmp str1이 str2보다 크면 1반환 작으면 -1반환 같으면 0반환
// strncmp n번째 까지 비교
#include<stdio.h>

int main(void) {
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);
	printf("앞에서 3개의 문자를 비교하면");
	if (strncmp(str1, str2, 3) == 0)
		printf("같다.\n");
	else
		printf("다르다.\n");
	return 0;
}