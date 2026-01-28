#include <stdio.h>

int main()
{
  int plan;
  float data;
  scanf("%d",&plan);
  scanf("%f",&data);
  switch(plan){
      case 1:
      if(data<=1.0){
          printf("Normal Speed");
      }
      else{
          printf("Speed Reduced");
      }
      break;
      case 2:
      if(data<=2.0){
          printf("Normal Speed");
      }
      else{
          printf("Extra charges applied");
      }
      default:
      printf("Extra charges applied");
  }
    return 0;
}