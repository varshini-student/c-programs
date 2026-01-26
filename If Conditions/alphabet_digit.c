// Alphabet,Digit,or Special Character
#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>=48 && ch<=57){
        printf("Digit");
    }
    else if(ch>=65 && ch<=90){
        printf("Alphabet(Uppercase)");
    }
    else if(ch>=97 && ch<=122){
        printf("Alphabet(Lowercase)");
    }
    else{
        printf("Special character");
    }
    return 0;
}
