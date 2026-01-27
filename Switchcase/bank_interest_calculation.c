
#include <stdio.h>

int main() 
{
    int account, years;
    scanf("%d%d", &account,&years);
    switch(account)
    {
        case 1:  
            printf("Interest 4%%");
            break;
        case 2:  
            if(years <= 3)
            {
                printf("Interest 5%%");
            }
            else
            {
                printf("Interest 7%%");
            }
            break;
        default:
            printf("Invalid Account Type");
    }
    return 0;
}