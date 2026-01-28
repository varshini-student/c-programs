#include<stdio.h>
int main(){
int loan,score;
scanf("%d%d",&loan,&score);
switch(loan){
    case 1:
    if(score>=700){
        printf("Approved");
    }
    else{
        printf("Manual Review");
    }
    break;
    case 2:
    if(score>=700){
        printf("Approved");
    }
    else{
        printf("Rejected");
    }
    break;
    default:
    printf("Invalid");
}
    return 0;
}