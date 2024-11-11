#include <stdio.h>
int main()
{
    int max(int x,int y){return (x > y) ? x : y;}
    int a,b,c;
    printf("input a&b:");
    scanf("%d%d",&a,&b);
    c=max(a,b);
    printf("max=%d\n",c);
    return 0;
}