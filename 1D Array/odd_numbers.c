array using odd numbers
#include <stdio.h>

int main()
{
   int n;
   int arr[50];
   int count; 
      scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0)
        count++;
    }
    printf("%d",count);

    return 0;
}
