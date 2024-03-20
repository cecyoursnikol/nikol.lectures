#include <stdio.h>

int main()
{
    int i, j,k, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        /* Print spaces  */
        for(j=n-1; j>=i; j--)
        {
            printf(" ");
        }

        /* Print star  */
        for(k=1; k<=i; k++)
        {
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}
