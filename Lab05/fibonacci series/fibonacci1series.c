#include <stdio.h>
int main() {
    int n, a=0, b=1, c;
    printf("enter the number of fibonacci series print");
    scanf("%d",&n);
    printf("Fibonacci Series\n");
    for(int i=1; i<= n; i++){
        printf("%d\n",a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

