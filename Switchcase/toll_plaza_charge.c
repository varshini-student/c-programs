#include<stdio.h>
int main(){
    int vehicle,trips;
    int amount=0;
    scanf("%d%d",&vehicle,&trips);
    switch(vehicle){
        case 1:
        if(trips==1){
            amount=100;
        }
        else{
            amount=800;
        }
        break;
        case 2:
           amount=trips*240;
           break;
           default:
           amount=0;
    }
    printf("₹%d",amount);
    return 0;
    
}