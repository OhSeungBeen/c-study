// white space ����
#include<stdio.h>

int main() {
    char string[20];
    char c;

    scanf("%s", string);
    // �Է¹��ۿ� ���๮�ڰ� �״�γ����ֵ�.
    // �׷��� �Ʒ� scanf�� �����Ҷ� �Է¹��ۿ� ���๮�ڰ� �־ �װ� c�� �־������.
    //scanf("%c", &c);
    //�ذ�� -> ������ �߰��Ͽ� white space �����ڷ� �ν��ϰ� �Ѵ�.
    scanf(" %c", &c);

    printf("%s\n", string);
    printf("%c\n", c);

    return 0;

}