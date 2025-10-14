#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("enter the number n(recomended 5 or greater than 5) : ");
    scanf("%d", &n);
    for (i = 0; i <= n-1; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=3*n/2;i++)
    {
        printf("* ");
    }
    printf("\n");
    for (i = 0; i < n - 1; i++)
    {

        for (j = 1; j <= n; j++)
        {
            printf(" ");
        }
        for (j = n - 1 - i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}