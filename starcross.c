#include <stdio.h>

int main()
{
    int n, i, j;
    printf("enter the number of lines :");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("please enter odd number");
    }
    else

    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == j)
                {
                    printf("*");
                }
                else if (j == n - i + 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}