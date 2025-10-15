#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the size of the arrow: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<=3*n/2;i++)
    {
        printf("*");
    }
    printf("\n");

    for (i = n - 1; i >= 1; i--)
    {
        for (j = i; j < n; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
