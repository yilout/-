#include <stdio.h>
int main()
{
    int numbers[10];
    int count=0;
    double sum=0.0;
    double aver;
    printf("请输入10个整数：");
    for(int i=0;i<10;i++){
        scanf("%d",&numbers[i]);
        if(numbers[i]>0){
            count++;sum+=numbers[i];
        }
    }
    if(count>0){
        aver=sum/count;
    }else{aver=0;}
    printf("正数个数为:%d\n"count);
    printf("正数平均数为:%2f\n",aver);
    return 0;
}