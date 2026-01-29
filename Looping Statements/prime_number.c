#include<stdio.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int flag=0;
    for(int i=2;i<n;i++) {
        if(n%i !=0) {
            continue;
        }
        else {
            flag=1;
            printf("not a prime number");
            break;
        }
    }
    if(flag==0) {
        printf("prime number");
    }
    return 0;
}