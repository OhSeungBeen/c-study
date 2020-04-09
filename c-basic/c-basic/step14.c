// white space 문제
#include<stdio.h>

int main() {
    char string[20];
    char c;

    scanf("%s", string);
    // 입력버퍼에 개행문자가 그대로남아있따.
    // 그래서 아래 scanf를 실행할때 입력버퍼에 개행문자가 있어서 그걸 c에 넣어버린다.
    //scanf("%c", &c);
    //해결법 -> 공백을 추가하여 white space 구분자로 인식하게 한다.
    scanf(" %c", &c);

    printf("%s\n", string);
    printf("%c\n", c);

    return 0;

}