#include <stdio.h>

int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    else
    {
        return i * factorial(i - 1);
    }
}

int main()
{
    int n, i, j,k;
    printf("enter the n  :");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (k = 0; k <= n-i-1; k++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%4d", factorial(i) / (factorial(i - j) * factorial(j)));
        }
        printf("\n");
    }

    return 0;
}