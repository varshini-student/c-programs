//  Check Divisible by 5
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n%5==0){
       printf("Divisible by 5",n);   
    }else{
        printf("Not Divisible by 5",n);
    }
    return 0;
}
