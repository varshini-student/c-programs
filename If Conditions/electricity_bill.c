// Electricity Bill
#include<stdio.h>
int main(){ 
  int units,bill;
  scanf("%d",&units);
  if(units>100){
      bill=units*5;
      printf("Bill amount = %d",bill);
  }
  else{
     printf("Invalid");
  }
  
   return 0; 
}
