//  Use logical AND on two non-zero values
// test case 1
// AND 
#include <stdio.h>

int main()
{
  int a = 5;
  int b = 3;
  printf("%d",a&&b);
 return 0;
//    output:1
}

// test case 2
//  Use logical AND on two non-zero values
#include <stdio.h>

int main()
{
  int a = 1;
  int b = 1;
  printf("%d",a&&b);
  return 0;
//  ouput:1
}

// test case 3
//  Use logical AND on two non-zero values
#include <stdio.h>

int main()
{
  int a = 0;
  int b = 5;
  printf("%d",a&&b);
  return 0;
//    output:0
}
