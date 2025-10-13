#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter the height of the tree (recommended 5 or more): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {

            for (k = j; k < n; k++)
            {
                printf(" ");
            }

            for (k = 1; k <= (2 * j - 1); k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    for (i = 1; i <= n - 2; i++)
    {
        printf(" ");
    }
    printf("|||\n");

    return 0;
}
