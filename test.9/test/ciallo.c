#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int letters = 0, spaces = 0, digits = 0, others = 0;
    int i;
    printf("请输入一行字符：");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            spaces++;
        } else {
            others++;
        }
    }
    printf("英文字母: %d\n", letters);
    printf("空格: %d\n", spaces);
    printf("数字: %d\n", digits);
    printf("其他字符: %d\n", others);
    return 0;
}
