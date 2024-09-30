#include <stdio.h>

int main()
{
    int rows = 5;
    int i,j,k;

    for ( i = 0; i < rows; i++) {   //outer loop

        for (j = 0; j < 2 * (rows - i) - 1; j++)

		 {
            printf("%d",j);
        }

        for (k = 0; k <= i; k++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

