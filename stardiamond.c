#include <stdio.h>

int main()
{
    int n, i, j,k;
    printf("enter the number of lines :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2 + 1)
        {
            for (j = 1; j <= n-i; j++)
            {
                printf(" ");
            }
            for (k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }
        }
        if (i > n / 2 + 1)
        {
            for (j = 1; j <= i-1; j++)
            {
                printf(" ");
            }
            for (k = 1; k <= 2 * (n - i) + 1; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}