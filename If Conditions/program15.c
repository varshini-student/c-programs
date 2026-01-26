// valid triangle
#include<stdio.h>
int main(){
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){   
        printf("Valid Triangle");
    }
    else{
        printf("Not a valid triangle");
    }
    return 0;
    
}