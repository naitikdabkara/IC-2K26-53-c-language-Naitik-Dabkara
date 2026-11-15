#include <stdio.h>
int main() {
    int a, b;
    char c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &c); 
    switch(c) {
        case '+':
            printf("Sum = %d", a+b);
            break;
        case '-':
            printf("Sub = %d", a-b);
            break;
        case '*':
            printf("Mul = %d", a*b);
            break;
        case '/':
            if(b != 0)
                printf("Div = %d", a/b);
            else
                printf("Cannot divide by zero");
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}
