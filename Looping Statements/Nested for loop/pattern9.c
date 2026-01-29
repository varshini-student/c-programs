#include <stdio.h>
int main() {
    for(int i=5;i>0;i--) {
        for(int k=0;k<=5-i;k++) {
                printf(" ");
            }
        for(int j=2;j<=2*i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    }