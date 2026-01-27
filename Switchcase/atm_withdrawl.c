#include <stdio.h>

int main(){
    int account;
    scanf("%d",&account);
    int balance,withdrawal;
    scanf("%d%d",&balance,&withdrawal);

     switch(account) {
         case 1:
         if(balance>=withdrawal){
             printf("transcation sucessfully");
         }
         else {
             printf("limited");
         }
         break;
         case 2:
         if(withdrawal<=5000){
             printf("transcation sucessfully");
         }
         else{
             printf("limited exceded");
         }
         default:
         printf("Transcation rejected");
     }  
    return 0;
}