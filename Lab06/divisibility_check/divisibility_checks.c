#include <stdio.h>
int main() {
    int a;
    printf("Enter your number");
    scanf("%d",&a);
    if (a%3==0&&a%5!=0)
        printf("The number is satisfying the condition");
    else
        printf("It doesn't satisfy the condition");
    return 0;
}
