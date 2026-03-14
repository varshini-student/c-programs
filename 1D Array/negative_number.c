array using count the negative numbers

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[50];
    int count;
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0)
        count++;
    }
    printf("%d",count);
    return 0;
}
