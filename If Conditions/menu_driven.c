// Menu-driven
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int choice;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Addition:%d",a+b);
        break;
        case 2:
        printf("Subtraction:%d",a-b);
        break;
        case 3:
        printf("Multiplication:%d",a*b);
        break;
        case 4:
        printf("Division:%d",a/b);
        break;
        default:
        printf("Invalid");
    }
    return 0;
}