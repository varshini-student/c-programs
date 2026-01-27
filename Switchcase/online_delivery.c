#include <stdio.h>

int main()
{
    int order,speed,charge;
    scanf("%d", &order,&speed);
    switch(speed)
    {
        case 1:   
            charge = 50;
            break;
        case 2: 
            if(orderAmount < 1000)
            {
                charge = 100;
            }
            else
            {
                charge = 0;
            }
            break;
        default:
            printf("Invalid");
            return 0;
    }
    printf("Delivery ₹%d", charge);
    return 0;
}