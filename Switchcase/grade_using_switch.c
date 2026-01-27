#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    int n =marks/10;
    switch(n){
        case 9 :
          printf("Grade A");
        break;
        case 8:
            printf("Grade B");
        break;
        case 7:
            printf("Grade C");
        break;
        case 6:
            printf("Grade D");
        break;
        case 5:
            printf("Grade E");
        break;
        case 4:
            printf("F");
        case 3:
           printf("Supplementery");
        break;
        default:
        printf("Fail");
    }
    return 0;
}