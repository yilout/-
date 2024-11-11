#include <stdio.h>
#include <math.h>
int main(){
int a,b,c;
int x,y,z;
for(a=0;a<10;a++){
    for(b=0;b<10;b++){
        for(c=0;c<10;c++){
            x=100*a+10*b+c;
            if(x>100&&x==pow(a,3)+pow(b,3)+pow(c,3)){
                printf("%d\n",x);
            }
        }
    }
}
return 0;
}

