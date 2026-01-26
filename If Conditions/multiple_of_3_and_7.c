// Multiple of 3 and 7
#include <stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   if(n%3==0 && n%7==0){
       printf("Multiple of both 3 and 7");
   }
   else{
       printf("Invalid Number");
   }
    return 0;
}
