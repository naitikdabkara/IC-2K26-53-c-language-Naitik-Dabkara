#include <stdio.h>
int main() {
    int a = 5;
    int b;
    int c;
    b = a--;  
    printf("%d , %d\n", a, b); 
    a = 5;
    c = --a;  
    printf("%d , %d", a, c); 
    return 0;
}
