#include <stdio.h>
#include <string.h>
int main() {
    char input[100], output[100];
    char target;
    int j = 0;
    printf("请输入字符串：\n");
    scanf("%s", input);
    printf("请输入要删除的字符：\n");
    scanf(" %c", &target);
    for(int i = 0; i < strlen(input); i++) {
        if(input[i] != target) {
            output[j++] = input[i];
        }
    }
    output[j] = '\0';
    printf("删除后的字符串为：%s\n", output);
    return 0;
}
