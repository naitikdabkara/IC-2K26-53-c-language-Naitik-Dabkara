//wrong code
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", a);
    return 0;
}
//correct code
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    return 0;
}
