#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the size of square (odd number recommended): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n || 
                (i + j == n / 2 + 2) || 
                (j - i == n / 2) || 
                (i - j == n / 2) || 
                (i + j == n + n / 2 + 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
