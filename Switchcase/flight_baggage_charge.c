#include <stdio.h>
int main() {
    int flight, weight;
    int charge;
    scanf("%d %d", &flight, &weight);
    switch(flight) {
        case 1: 
            charge = weight * 300;
            printf("Extra Baggage Charge ₹%d\n", charge);
            break;
        case 2: 
            if (weight <= 3)
                printf("Free\n");
            else {
                charge = (weight - 3) * 300;
                printf("Extra Baggage Charge ₹%d\n", charge);
            }
            break;
        default:
            printf("Invalid Flight Class\n");
    }
    return 0;
}