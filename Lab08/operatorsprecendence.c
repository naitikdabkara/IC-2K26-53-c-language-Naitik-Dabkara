    #include <stdio.h>

int main() {
    printf("%d\n", 17 % 5 * 2 + 3);

    int x1 = 10, y1 = 4;
    printf("%d\n", x1 > y1 ? x1 % y1 + 2 : y1 * 2);

    int a1 = 4, b1 = 6;
    printf("%d\n", a1 + b1 > 10 || a1 * 2 == b1 && b1 % 2 == 0);

    int x2 = 8, y2 = 3;
    printf("%d\n", x2 > y2 ? x2 % y2 == 2 ? x2 + y2 : x2 - y2 : y2 * 2);

    int a2 = 5, b2 = 3;
    printf("%d\n", a2++ * 2 + --b2);

    return 0;
}
