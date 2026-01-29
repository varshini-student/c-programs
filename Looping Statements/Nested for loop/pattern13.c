#include <stdio.h>
int main() {
    int space=6;
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d",j);
        }
        for (int s=1; s<=space; s++) {
            printf(" ");
        }
        for (int k=i;k>=1;k--) {
            printf("%d",k);
        }
        printf("\n");
        space=space-2;
    }
    return 0;