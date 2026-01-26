// Grade calculation
#include <stdio.h>

int main() {
    int mark;
    scanf("%d",&mark);
    if(mark>=90){
        printf("Grade A+");
    }
    else if(mark>=80 && mark<=90 ){
        printf("Grade A ");
    }
    else if(mark>=70 && mark<=80){
        printf("Grade B+");
    }
    else if(mark>=60 && mark<=50){
        printf("Grade B");
    }
    else{
        printf("Fail");
    }
    return 0;
}
