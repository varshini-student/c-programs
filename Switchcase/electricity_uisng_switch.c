#include <stdio.h>

int main(){
    int units,type;
    int bill=0;
    scanf("%d%d",&units,&type);
    switch(units){
        case 1 :
        if(type<100){
            bill=type*3;
            printf("%d",bill);
        }
        else if(type>=100){
            type=type-100;
            bill=(300+(type*5));
            printf("%d",bill);
        }
        break;
        case 2:
        if(type<100){
            bill=type*7;
            printf("%d",bill);
        }
        else if(type>=100){
            type=type-100;
            bill=(700+(type*10));
            printf("%d",bill);
        }
        
    return 0;
}
}
