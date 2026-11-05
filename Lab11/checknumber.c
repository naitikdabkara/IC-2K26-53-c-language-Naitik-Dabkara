#include<stdio.h>
int main(){
  int a;
  printf("Enter the number of which you wanna see the if the number is positive negative or zero:");
  scanf("%d",&a);
  if (a>0)
    printf("The number is positive");
  else if (a<0)
    printf("The number is negative");
  else
           printf("The enetred number is zero");
  return 0;
}
