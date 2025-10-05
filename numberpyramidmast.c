#include <stdio.h>

int main()
{
    int i, j, n, k, a;
    printf("enter the number of lines :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        if (i >= 2)
            for (a = 1; a <= i - 1; a++)
            {

                printf("%d", i - a);
            }
        printf("\n");
    }
    return 0;
}