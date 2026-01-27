#include<stdio.h>
int main(){
    int plan,payment;
    scanf("%d%d",&plan,&payment);
    int amount,cashback;
    switch(plan){
        case 1:
        amount=199;
        break;
        case 2:
        amount=399;
        break;
        default:
        printf("invalid");
    }
    switch(payment){
        case 11:
        case 12:
        cashback=20;
        break;
        case 13:
        cashback=0;
        default:
        printf("Invalid");
        
    }
    amount=amount-cashback;
    printf("pay ₹%d",amount);
    return 0;
}