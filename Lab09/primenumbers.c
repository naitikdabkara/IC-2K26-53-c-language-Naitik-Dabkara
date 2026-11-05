#include <stdio.h>

int main()
{
    int n, num, i, flag, count = 0;
    scanf("%d", &n);
    for(num = 2; num <= n; num++)
    {
        flag = 0;
        for(i = 2; i * i <= num; i++)
        {
            if(num % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            count++;
    }
    printf("Total prime numbers = %d", count);
    return 0;
}
