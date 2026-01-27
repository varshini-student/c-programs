#include <stdio.h>

int main()
{
 int class,age;
 int fare;
 scanf("%d%d",&class,&age);
 switch(class){
     case 1:
     if(age<12){
        fare=(300-(300/100)*50);
     }
     else if(age>=60){
         fare=(300-(300/100)*33);
     }
     else{
         fare=300;
     }
     printf("Fare %d",fare);
     break;
     case 2:
     if(age<12){
         fare=(1000-(1000/100)*50);
     }
     else{
        fare=1000;
     }
     printf("Fare ₹ %d",fare);
     break;
     default:
     printf("Invalid");
 }
    return 0;
}