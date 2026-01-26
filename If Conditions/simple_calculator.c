// simple calculator
#include <stdio.h>

int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  int c;
  scanf("%d",&c);
  switch(c){
      case 1:
      printf("%d",a+b);
      break;
      printf("Invalid");
  }
    return 0;
}

