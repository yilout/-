#include <stdio.h>
int main() {
    int matrix[3][3];
    int sum = 0;
    printf("请输入3x3矩阵的元素：\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }
    printf("主对角线元素的和为：%d\n", sum);
    return 0;
}
