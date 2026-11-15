#include<stdio.h>
int main(){
    int num;
    printf("Enter the number you want to see Pallindrome of :");
    scanf("%d",&num);
    int original = num;
    int reverse = 0;
    while(num>0){
        int digit = num%10;
        reverse = reverse*10+ digit;
        num/=10;
    }
    if (reverse == original)
        printf("The number is Pallindrome!");
    else
        printf("The number is not Pallindrome");
    return 0;
}
