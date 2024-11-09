#include <stdio.h>
int main() {
    int arr[10];
    int positive_count = 0;
    float positive_sum = 0.0;
    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
            positive_sum += arr[i];
        }
    }
    printf("正数的个数为：%d\n", positive_count);
    if (positive_count > 0) {
        float average = positive_sum / positive_count;
        printf("正数的平均值为：%.2f\n", average);
    } else {
        printf("没有正数，无法计算平均值。\n");
    }
    return 0;
}
