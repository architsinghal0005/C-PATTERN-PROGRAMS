#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("enter the number :");
    scanf("%d", &n);
    for (i = n / 2; i < n; i += 2)
    {
        for (j = 1; j < (n - i) ; j += 2)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n; i > 0; i--)
    {
        for (j = n; j > i; j--)
        {
            printf(" ");
        }
        for (k = i * 2; k > 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}