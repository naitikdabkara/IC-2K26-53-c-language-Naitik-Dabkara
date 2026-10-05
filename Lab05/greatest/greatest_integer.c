#include <stdio.h>
int main() {
    int a = 10, b = 25, c = 15, d;
    d= (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("The greatest number is: %d\n",d);
    return 0;
}
