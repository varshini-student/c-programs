// Check 3 digit number
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n>=100){
        printf("Three-digit number");
    }
    else{
        printf("Invalid Number");
    }
    return 0;
}