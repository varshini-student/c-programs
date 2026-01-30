#include<stdio.h>
int main(){
    char ch;
    for( int i=0;i<4;i++){
        ch='A';
    for(int j=0;j<=i;j++){
        printf("%c",ch);
        ch++;
    }
    ch-=2;
    for(int j=0;j<i;j++){
        printf("%c",ch);
        ch--;
    }
    printf("\n");
    }
    return 0;
}