#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number till which you want to see the sum");
    scanf("%d",&a);
    b=0;
    c=0;
    while (c<=a){
        b+=c;
        ++c;
    }
    printf("The sum of all the numbers till %d is %d",a,b);
     return 0;   
}
