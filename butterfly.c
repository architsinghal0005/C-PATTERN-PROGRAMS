#include <stdio.h>

int main()
{
    int i, j, k, n, a;
    printf("enter the number of lines : ");
    scanf("%d", &n);
    int nsp = 2;
    int nst = n;
    int nspp=2*n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=nspp;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        nspp-=2;
        printf("\n");
    }
    for (i = 1; i <= 2 * n + 2; i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }

        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}