// Check postive,negative,or Zero
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>0){
       printf("Postive Number",n);   
    }
    else if(n<0){
       printf("Negative Number",n);
    }
    else{
        printf("Zero");
    }
    return 0;
}