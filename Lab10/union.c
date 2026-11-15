#include <stdio.h>
union Data
{
    int i;
    float f;
    char ch;
};
int main()
{
    union Data d;
    d.i = 10;
    printf("Integer: %d\n", d.i);
    printf("Size: %lu bytes - proves shared memory", sizeof(d));
    return 0;
}
